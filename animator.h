#pragma once
#include "component.h"
#include "animation.h"
#include "image.h"

namespace BP
{
	class animator : public component
	{
	public:
		struct event
		{
			void operator = (std::function<void()> func)
			{
				mEvent = std::move(func);
			}
			void operator()()
			{
				if (mEvent)
				{
					mEvent();
				}
			}
			//�Լ������� ����: void(*name)(int, int)
			std::function<void()> mEvent;
		};
		//ȣ�� �ѹ��� event����, ����, ������ ��� �����Ѵ�.
		struct events
		{
			event mStartEvent;
			event mCompleteEvent;
			event mEndEvent;
		};

		animator();
		~animator();

		virtual void initialize() override;
		virtual void update() override;
		virtual void render(HDC hdc) override;
		virtual void release() override;

		//��� ���ϸ��̼��� �� ���Ͽ� �ִ� ���
		void createAnimation(const std::wstring& name
			, image* sheet
			, vector2 leftTop
			, UINT coulmn
			, UINT row
			, UINT spriteLength
			, vector2 offset
			, float duration);

		//��� ���ϸ��̼��� ���� ���Ͽ� ������ �ִ� ���
		void createAnimations(const std::wstring& path, vector2 offset, float duration);

		animation* findAnimation(const std::wstring& name);
		void play(const std::wstring& name, bool loop);

		events* findEvents(const std::wstring& name);
		std::function<void()>& getStartEvent(const std::wstring& name);
		std::function<void()>& getCompleteEvent(const std::wstring& name);
		std::function<void()>& getEndEvent(const std::wstring& name);

	private:
		std::map<std::wstring, animation*> mAnimations;
		std::map<std::wstring, events*> mEvents;
		animation* mActiveAnimation;
		image* mSpriteSheet;
		bool mbLoop;
	};
}
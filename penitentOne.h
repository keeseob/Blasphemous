#pragma once
#include "gameObject.h"
#include "image.h"

namespace BP
{
	class animator;
	class penitentOne : public gameObject
	{
	public:
		enum class ePenitentState
		{
			move,
			attack,
			death,
			idle,
		};

		penitentOne();
		~penitentOne();

		virtual void initialize() override;
		virtual void update() override;
		virtual void render(HDC hdc) override;
		virtual void release() override;

		virtual void onCollisionEnter(class collider* other) override;
		virtual void onCollisionStay(class collider* other) override;
		virtual void onCollisionExit(class collider* other) override;

	private:
		void move();
		void attack();
		void death();
		void idle();

		void idleCompleteEvent();

	private:
		ePenitentState mState;
		animator* mAnimator;
		static image* mImage;
	};
}
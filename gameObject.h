#pragma once
#include "entity.h"
#include "component.h"

namespace BP
{
	class gameObject :public entity
	{
	public:
		enum class eState
		{
			active,
			pause,
			death,
		};

		gameObject();
		virtual ~gameObject();

		virtual void initialize();
		virtual void update();
		virtual void render(HDC hdc);
		virtual void release();

		virtual void onCollisionEnter(class collider* other);
		virtual void onCollisionStay(class collider* other);
		virtual void onCollisionExit(class collider* other);

		template <typename T>
		T* addComponent() //component ��� �� ��� component ��� ����
		{
			T* comp = new T();
			UINT comType = (UINT)comp->getType();
			mComponent[comType] = comp;
			comp->setOwner(this);

			return comp;
		}

		template <typename T>
		T* getComponent()
		{
			for (component* comp : mComponent)
			{
				if (dynamic_cast<T*>(comp)) //������ '��'�̸�, ���ϴ� ������ ã�Ҵٴ� ��
				{
					return dynamic_cast<T*>(comp);
				}
			}
			return nullptr;
		}
			
	private:
		std::vector<component*> mComponent;
	};
}
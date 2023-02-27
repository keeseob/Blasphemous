#pragma once
#include "entity.h"
#include "component.h"

namespace BP
{
	class object :public entity
	{
	public:
		object();
		virtual ~object();

		virtual void initialize();
		virtual void update();
		virtual void render(HDC hdc);
		virtual void release();

		template <typename T>
		T* addComponent() //component ��� �� ��� component ��� ����
		{
			T* comp = new T();
			UINT comType = (UINT)comp->getType();
			mComponent[comType] = comp;

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
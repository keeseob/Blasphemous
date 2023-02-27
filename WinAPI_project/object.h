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
		T* addComponent() //component 상속 및 기능 component 요소 구현
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
				if (dynamic_cast<T*>(comp)) //조간이 '참'이면, 원하는 정보를 찾았다는 뜻
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
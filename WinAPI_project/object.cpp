#include "object.h"
#include "transformation.h"

namespace BP
{
	object::object()
	{
		mComponent.resize((UINT)eComponentType::end);
		addComponent<transformation>(); //object 실행 시, transformation도 같이 작동
	}

	object::~object()
	{
	}

	void object::initialize()	
	{
		for (component* comp : mComponent)
		{
			if (comp == nullptr)
			{
				continue;
			}
			comp->initialize();
		}
	}

	void object::update()
	{
		for (component* comp : mComponent)
		{
			if (comp == nullptr)
			{
				continue;
			}
			comp->update();
		}
	}

	void object::render(HDC hdc)
	{
		for (component* comp : mComponent)
		{
			if (comp == nullptr)
			{
				continue;
			}
			comp->render(hdc);
		}
	}

	void object::release()
	{
		for (component* comp : mComponent)
		{
			if (comp == nullptr)
			{
				continue;
			}
			comp->release();
		}
	}
}
#include "object.h"

namespace BP
{
	object::object()
	{
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
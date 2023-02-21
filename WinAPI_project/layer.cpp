<<<<<<< HEAD
#include "layer.h"

namespace BP
{
	layer::layer()
	{
	}
	layer::~layer()
	{
	}
	void layer::initialize()
	{
		for (object* obj : mObject)
		{
			if (obj == nullptr)
			{
				continue;
			}
			obj->initialize();
		}
	}
	void layer::update()
	{
		for (object* obj : mObject)
		{
			if (obj == nullptr)
			{
				continue;
			}
			obj->update();
		}
	}
	void layer::render(HDC hdc)
	{
		for (object* obj : mObject)
		{
			if (obj == nullptr)
			{
				continue;
			}
			obj->render(hdc);
		}
	}
	void layer::release()
	{
		for (object* obj : mObject)
		{
			if (obj == nullptr)
			{
				continue;
			}
			obj->release();
		}
	}
	void layer::addObject(object* obj)
	{
		if (obj == nullptr)
		{
			return;
		}
		mObject.push_back(obj);
	}
=======
#include "layer.h"

namespace BP
{
	layer::layer()
	{
	}
	layer::~layer()
	{
	}
	void layer::initialize()
	{
		for (object* obj : mObject)
		{
			if (obj == nullptr)
			{
				continue;
			}
			obj->initialize();
		}
	}
	void layer::update()
	{
		for (object* obj : mObject)
		{
			if (obj == nullptr)
			{
				continue;
			}
			obj->update();
		}
	}
	void layer::render(HDC hdc)
	{
		for (object* obj : mObject)
		{
			if (obj == nullptr)
			{
				continue;
			}
			obj->render(hdc);
		}
	}
	void layer::release()
	{
		for (object* obj : mObject)
		{
			if (obj == nullptr)
			{
				continue;
			}
			obj->release();
		}
	}
	void layer::addObject(object* obj)
	{
		if (obj == nullptr)
		{
			return;
		}
		mObject.push_back(obj);
	}
>>>>>>> bfdcdd2571c3c5f275f705fa45aa3757efbf6e94
}
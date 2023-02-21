#include "scene.h"

namespace BP
{
	scene::scene()
	{
		mLayer.resize((UINT)eLayerType::end);
	}
	scene::~scene()
	{
	}
	void scene::initialize()
	{
		for (layer& lyr : mLayer)
		{
			lyr.initialize();
		}
	}

	void scene::update()
	{
		for (layer& lyr : mLayer)
		{
			lyr.update();
		}
	}

	void scene::render(HDC hdc)
	{
		for (layer& lyr : mLayer)
		{
			lyr.render(hdc);
		}
	}

	void scene::release()
	{
		for (layer& lyr : mLayer)
		{
			lyr.release();
		}
	}

	void scene::addObject(object* obj, eLayerType lyr)
	{
		mLayer[(UINT)lyr].addObject(obj);
	}
}
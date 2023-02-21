#include "actionScene.h"
#include "panitentOne.h"

namespace BP
{
	actionScene::actionScene()
	{
	}

	actionScene::~actionScene()
	{
	}

	void actionScene::initialize()
	{
		panitentOne* panitent = new panitentOne();
		addObject(panitent, eLayerType::player);

		scene::initialize();
	}

	void actionScene::update()
	{
		scene::update();
	}

	void actionScene::render(HDC hdc)
	{
		scene::render(hdc);
	}

	void actionScene::release()
	{
		scene::release();
	}
}

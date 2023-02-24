#include "actionScene.h"
#include "panitentOne.h"
#include "keyInput.h"
#include "sceneManager.h"
#include "background.h"

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
		mPanitentOne = new panitentOne();
		mBackground = new background();
		addObject(mPanitentOne, eLayerType::player);
		addObject(mBackground, eLayerType::background);

		scene::initialize();
	}

	void actionScene::update()
	{
		if (keyInput::getKeyState(eKeyCode::N) == eKeyState::down)
		{
			sceneManager::loadScene(eSceneType::title);
		}
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

	void actionScene::onEnter()
	{

	}

	void actionScene::onExit()
	{
		//mPanitentOne->setPosition(vector2{ 0.0f, 0.0f });
	}
}

#include "titleScene.h"
#include "keyInput.h"
#include "sceneManager.h"
#include "findResource.h"
#include "titleImage.h"

namespace BP
{
	titleScene::titleScene()
	{
	}
	titleScene::~titleScene()
	{
	}
	void titleScene::initialize()
	{
		mTitle = new titleImage();
		addObject(mTitle, eLayerType::background);

		scene::initialize();
	}
	void titleScene::update()
	{
		if (keyInput::getKeyState(eKeyCode::N) == eKeyState::down)
		{
			sceneManager::loadScene(eSceneType::play);
		}
	}
	void titleScene::render(HDC hdc)
	{
		scene::render(hdc);
	}
	void titleScene::release()
	{
	}
	void titleScene::onEnter()
	{
	}
	void titleScene::onExit()
	{
	}
}

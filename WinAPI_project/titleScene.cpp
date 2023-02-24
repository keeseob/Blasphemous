#include "titleScene.h"
#include "keyInput.h"
#include "sceneManager.h"

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

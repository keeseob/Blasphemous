#include "sceneManager.h"
#include "actionScene.h"
#include "titleScene.h"

namespace BP
{
	std::vector<scene*> sceneManager::mScene = {};
	scene* sceneManager::mActiveScene = nullptr;

	void sceneManager::initialize()
	{
		mScene.resize((UINT)eSceneType::end);
		mScene[(UINT)eSceneType::title] = new titleScene();
		mScene[(UINT)eSceneType::play] = new actionScene();

		mActiveScene = mScene[(UINT)eSceneType::title];

		for (scene* scn : mScene)
		{
			if (scn == nullptr)
			{
				continue;
			}
			scn->initialize();
		}
	}

	void sceneManager::update()
	{
		mActiveScene->update();
	}

	void sceneManager::render(HDC hdc)
	{
		mActiveScene->render(hdc);
	}

	void sceneManager::release()
	{
		for (scene* scn : mScene)
		{
			if (scn == nullptr)
			{
				continue;
			}
			scn->release();
		}
	}

	void sceneManager::loadScene(eSceneType type)
	{
		//ÇöÀç ¾À
		mActiveScene->onExit();

		//´ÙÀ½ ¾À
		mActiveScene = mScene[(UINT)type];
		mActiveScene->onEnter();
	}
}

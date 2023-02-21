<<<<<<< HEAD
#include "sceneManager.h"
#include "actionScene.h"

namespace BP
{
	std::vector<scene*> sceneManager::mScene = {};
	void sceneManager::initialize()
	{
		mScene.resize((UINT)eSceneType::max);
		mScene[(UINT)eSceneType::play] = new actionScene();
		mScene[(UINT)eSceneType::play]->setName(L"PLAYER");

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
		for (scene* scn : mScene)
		{
			if (scn == nullptr)
			{
				continue;
			}
			scn->update();
		}
	}

	void sceneManager::render(HDC hdc)
	{
		for (scene* scn : mScene)
		{
			if (scn == nullptr)
			{
				continue;
			}
			scn->render(hdc);
		}
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
}
=======
#include "sceneManager.h"
#include "actionScene.h"

namespace BP
{
	std::vector<scene*> sceneManager::mScene = {};
	void sceneManager::initialize()
	{
		mScene.resize((UINT)eSceneType::max);
		mScene[(UINT)eSceneType::play] = new actionScene();
		mScene[(UINT)eSceneType::play]->setName(L"PLAYER");

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
		for (scene* scn : mScene)
		{
			if (scn == nullptr)
			{
				continue;
			}
			scn->update();
		}
	}

	void sceneManager::render(HDC hdc)
	{
		for (scene* scn : mScene)
		{
			if (scn == nullptr)
			{
				continue;
			}
			scn->render(hdc);
		}
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
}
>>>>>>> bfdcdd2571c3c5f275f705fa45aa3757efbf6e94

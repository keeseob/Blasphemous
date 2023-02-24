#pragma once
#include "scene.h"

namespace BP
{
	class sceneManager
	{
	public:
		static void initialize();
		static void update();
		static void render(HDC hdc);
		static void release();

		static void loadScene(eSceneType type);

	private:
		static std::vector<scene*> mScene;
		static scene* mActiveScene;
	}; 
}
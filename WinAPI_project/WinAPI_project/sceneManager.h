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

	private:
		static std::vector<scene*> mScene;
	}; 
}
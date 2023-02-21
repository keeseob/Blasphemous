<<<<<<< HEAD
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
=======
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
>>>>>>> bfdcdd2571c3c5f275f705fa45aa3757efbf6e94
}
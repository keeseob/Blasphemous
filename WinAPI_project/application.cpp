#include "application.h"
#include "sceneManager.h"
#include "time.h"

namespace BP
{
	application::application()
		: mHwnd(NULL)
		, mHdc(NULL)
	{
	}

	application::~application()
	{
		sceneManager::release();
	}

	void application::initialize(HWND hWnd)
	{
		mHwnd = hWnd;
		mHdc = GetDC(hWnd);

		time::initialize();
		sceneManager::initialize();
	}

	void application::run()
	{
		update();
		render();
	}

	void application::update()
	{
		time::update();
		sceneManager::update();
	}
	

	void application::render()
	{
		time::render(mHdc);
		sceneManager::render(mHdc);
	}
}


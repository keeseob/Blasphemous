#include "background.h"
#include "sceneManager.h"
#include "findResource.h"

namespace BP
{
	background::background()
	{
	}

	background::~background()
	{
	}

	void background::initialize()
	{
		mBack = findResource::load<image_panitentOne>(L"background", L"..\\Resource\\background.bmp");

		object::initialize();

		mPosition.x = 0;
		mPosition.y = 0;
	}

	void background::update()
	{
		object::update();
	}

	void background::render(HDC hdc)
	{
		object::render(hdc);

		BitBlt
		(hdc, 0, 0, mBack->getWidth(), mBack->getHeight(), mBack->getHdc(), 0, 0, SRCCOPY);
	}

	void background::release()
	{
		object::release();
	}
}

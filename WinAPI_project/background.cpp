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
		mBack = findResource::load<image_panitentOne>(L"background", L"..\\Resource\\background2.bmp");

		object::initialize();

		mPosition.x = -100;
		mPosition.y = -150;
	}

	void background::update()
	{
		object::update();
	}

	void background::render(HDC hdc)
	{
		object::render(hdc);

		BitBlt
		(hdc, mPosition.x, mPosition.y, mBack->getWidth(), mBack->getHeight(), mBack->getHdc(), 0, 0, SRCCOPY);
	}

	void background::release()
	{
		object::release();
	}
}

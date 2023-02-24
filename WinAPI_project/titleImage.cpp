#include "titleImage.h"
#include "sceneManager.h"
#include "findResource.h"

namespace BP
{
	titleImage::titleImage()
	{
	}

	titleImage::~titleImage()
	{
	}

	void titleImage::initialize()
	{
		mTitle = findResource::load<image_panitentOne>(L"titleImage", L"..\\Resource\\menu_skull.bmp");

		object::initialize();

		mPosition.x = 500;
		mPosition.y = 540;
	}

	void titleImage::update()
	{
		object::update();
	}

	void titleImage::render(HDC hdc)
	{
		object::render(hdc);

		BitBlt
		(hdc, mPosition.x, mPosition.y, mTitle->getWidth(), mTitle->getHeight(), mTitle->getHdc(), 0, 0, SRCCOPY);
	}

	void titleImage::release()
	{
		object::release();
	}
}

#include "titleImage.h"
#include "sceneManager.h"
#include "findResource.h"
#include "transformation.h"

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
		mTitle = findResource::load<image_panitentOne>(L"titleImage", L"..\\Resource\\PressAnybutton.bmp");

		object::initialize();
		transformation* trns = getComponent<transformation>();
		vector2 pos = trns->getPosition();

		pos.x = 600;
		pos.y = 250;

		trns->setPosition(pos);
	}

	void titleImage::update()
	{
		object::update();
	}

	void titleImage::render(HDC hdc)
	{
		object::render(hdc);
		transformation* trns = getComponent<transformation>();
		vector2 pos = trns->getPosition();

		BitBlt
		(hdc, pos.x, pos.y, mTitle->getWidth(), mTitle->getHeight(), mTitle->getHdc(), 0, 0, SRCCOPY);
	}

	void titleImage::release()
	{
		object::release();
	}
}

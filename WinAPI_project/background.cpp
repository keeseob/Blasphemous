#include "background.h"
#include "sceneManager.h"
#include "findResource.h"
#include "transformation.h"

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
		transformation* trns = getComponent<transformation>();
		vector2 pos = trns->getPosition();

		pos.x = -100;
		pos.y = -150;

		trns->setPosition(pos);
	}

	void background::update()
	{
		object::update();
	}

	void background::render(HDC hdc)
	{
		object::render(hdc);
		transformation* trns = getComponent<transformation>();
		vector2 pos = trns->getPosition();

		BitBlt
		(hdc, pos.x, pos.y, mBack->getWidth(), mBack->getHeight(), mBack->getHdc(), 0, 0, SRCCOPY);
	}

	void background::release()
	{
		object::release();
	}
}

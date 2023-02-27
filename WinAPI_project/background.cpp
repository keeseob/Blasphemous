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
		mImage = findResource::load<image_panitentOne>(L"background", L"..\\Resource\\background1.bmp");

		object::initialize();
		transformation* trns = getComponent<transformation>();
		vector2 pos = trns->getPosition();

		pos.x = 0;
		pos.y = 0;

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

		TransparentBlt
		(hdc, pos.x, pos.y, mImage->getWidth() * 2.5, mImage->getHeight() * 2.5, mImage->getHdc(), 0, 0, mImage->getWidth(), mImage->getHeight(), RGB(255, 0, 255));
	}

	void background::release()
	{
		object::release();
	}
}

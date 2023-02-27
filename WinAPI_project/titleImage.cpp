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
		mTitle = findResource::load<image_panitentOne>(L"titleImage", L"..\\Resource\\crisanta-main-menu-animation_0013_Capa-1.bmp");

		object::initialize();
		transformation* trns = getComponent<transformation>();
		vector2 pos = trns->getPosition();

		pos.x = 0;
		pos.y = 0;

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

		TransparentBlt
		(hdc, pos.x, pos.y, mTitle->getWidth() * 2.5, mTitle->getHeight() * 2.5, mTitle->getHdc(), 0, 0, mTitle->getWidth(), mTitle->getHeight(), RGB(255, 0, 255));
	}

	void titleImage::release()
	{
		object::release();
	}
}

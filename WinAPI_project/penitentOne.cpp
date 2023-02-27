#include "penitentOne.h"
#include "time.h"
#include "sceneManager.h"
#include "keyInput.h"
#include "sceneManager.h"
#include "findResource.h"
#include "transformation.h"

namespace BP
{
	penitentOne::penitentOne()
	{
	}

	penitentOne::~penitentOne()
	{
	}

	void penitentOne::initialize()
	{
		mImage = findResource::load<image_panitentOne>(L"penitentOne", L"..\\Resource\\penitentOne.bmp");

		object::initialize();
		transformation* trns = getComponent<transformation>();
		vector2 pos = trns->getPosition();

		pos.x = 100;
		pos.y = 650;

		trns->setPosition(pos);
	}

	void penitentOne::update()
	{	
		object::update();
		transformation* trns = getComponent<transformation>();
		vector2 pos = trns->getPosition();

		if (keyInput::getKeyState(eKeyCode::A) == eKeyState::pressed)
		{
			pos.x -= 200.0f * time::deltaTime();
		}
		if (keyInput::getKeyState(eKeyCode::D) == eKeyState::pressed)
		{
			pos.x += 200.0f * time::deltaTime();
		}
		if (keyInput::getKeyState(eKeyCode::W) == eKeyState::pressed)
		{
			pos.y -= 400.0f * time::deltaTime();
		}
		if (keyInput::getKeyState(eKeyCode::S) == eKeyState::pressed)
		{
			pos.y += 400.0f * time::deltaTime();
		}
		trns->setPosition(pos);
	}

	void penitentOne::render(HDC hdc)
	{
		object::render(hdc);
		transformation* trns = getComponent<transformation>();
		vector2 pos = trns->getPosition();

		BitBlt
			(hdc, pos.x, pos.y, mImage->getWidth(), mImage->getHeight(), mImage->getHdc(), 0, 0, SRCCOPY);
	}

	void penitentOne::release()
	{
		object::release();
	}
}
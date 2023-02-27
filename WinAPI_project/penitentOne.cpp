#include "penitentOne.h"
#include "time.h"
#include "sceneManager.h"
#include "keyInput.h"
#include "sceneManager.h"
#include "findResource.h"
#include "transformation.h"

namespace BP
{
	penitentOne::penitentOne() : mTime(0.0f), mIdx(0)
	{
	}

	penitentOne::~penitentOne()
	{
	}

	void penitentOne::initialize()
	{
		mImage = findResource::load<image_panitentOne>(L"penitentOne", L"..\\Resource\\penitent_running_anim.bmp");

		object::initialize();
		transformation* trns = getComponent<transformation>();
		vector2 pos = trns->getPosition();

		pos.x = 100;
		pos.y = 350;

		trns->setPosition(pos);
	}

	void penitentOne::update()
	{	
		object::update();
		transformation* trns = getComponent<transformation>();
		vector2 pos = trns->getPosition();

		if (keyInput::getKeyState(eKeyCode::A) == eKeyState::pressed)
		{
			pos.x -= 350.0f * time::deltaTime();
		}
		if (keyInput::getKeyState(eKeyCode::D) == eKeyState::pressed)
		{
			pos.x += 350.0f * time::deltaTime();
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

		mTime += time::deltaTime();

		if (mIdx >= 6)
		{
			mIdx = 0;
		}

		if (mTime > 0.1f)
		{
			mIdx++;
			mTime = 0.0f;
		}
		TransparentBlt
		(hdc, pos.x, pos.y, 210, 210,
			mImage->getHdc(), (70 * mIdx), 0, 70, 70, RGB(255, 0, 255));
	}

	void penitentOne::release()
	{
		object::release();
	}
}
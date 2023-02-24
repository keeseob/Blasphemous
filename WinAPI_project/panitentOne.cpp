#include "panitentOne.h"
#include "time.h"
#include "sceneManager.h"
#include "keyInput.h"
#include "findResource.h"


namespace BP
{
	panitentOne::panitentOne()
	{
	}

	panitentOne::~panitentOne()
	{
	}

	void panitentOne::initialize()
	{
		mImage = findResource::load<image_panitentOne>(L"panitentOne", L"..\\Resource\\panitentOne.bmp");

		object::initialize();

		mPosition.x = 100;
		mPosition.y = 650;
	}

	void panitentOne::update()
	{	
		object::update();

		if (keyInput::getKeyState(eKeyCode::A) == eKeyState::pressed)
		{
			mPosition.x -= 200.0f * time::deltaTime();
		}
		if (keyInput::getKeyState(eKeyCode::D) == eKeyState::pressed)
		{
			mPosition.x += 200.0f * time::deltaTime();
		}
		if (keyInput::getKeyState(eKeyCode::W) == eKeyState::pressed)
		{
			mPosition.y -= 400.0f * time::deltaTime();
		}
		if (keyInput::getKeyState(eKeyCode::S) == eKeyState::pressed)
		{
			mPosition.y += 400.0f * time::deltaTime();
		}
	}

	void panitentOne::render(HDC hdc)
	{
		object::render(hdc);

		BitBlt
			(hdc, mPosition.x, mPosition.y, mImage->getWidth(), mImage->getHeight(), mImage->getHdc(), 0, 0, SRCCOPY);
	}

	void panitentOne::release()
	{
		object::release();
	}
}

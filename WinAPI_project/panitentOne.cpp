#include "panitentOne.h"
#include "sceneManager.h"
#include "time.h"

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
		object::initialize();

		mPosition.x = 100;
		mPosition.y = 650;
	}

	void panitentOne::update()
	{
		object::update();

		if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		{
			mPosition.x -= 100.0f * time::deltaTime();
		}
		if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		{
			mPosition.x += 100.0f * time::deltaTime();
		}
		if (GetAsyncKeyState(VK_UP) & 0x8000)
		{
			mPosition.y -= 100.0f * time::deltaTime();
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		{
			mPosition.y += 100.0f * time::deltaTime();
		}
	}

	void panitentOne::render(HDC hdc)
	{
		object::render(hdc);
			//stock 오브젝트
		HBRUSH brush = CreateSolidBrush(RGB(255, 0, 0));
		HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, brush);

		HPEN pen = CreatePen(PS_SOLID, 15, RGB(0, 0, 0));
		HPEN oldPen = (HPEN)SelectObject(hdc, pen);

		Ellipse(hdc, mPosition.x, mPosition.y, mPosition.x + 100, mPosition.y + 100);

		SelectObject(hdc, oldPen);
		DeleteObject(pen);
		SelectObject(hdc, oldBrush);
		DeleteObject(brush);
	}

	void panitentOne::release()
	{
		object::release();
	}
}

#include "application.h"
#include "sceneManager.h"
#include "time.h"
#include "keyInput.h"

namespace BP
{
	application::application() : mHwnd(NULL), mHdc(NULL)
	{
	}

	application::~application()
	{
		sceneManager::release();
	}

	void application::initialize(HWND hWnd)
	{
		mHwnd = hWnd;
		mHdc = GetDC(hWnd);
		mWidth = 1600;
		mHeight = 900;

		//�ػ� ������ ���� ������ ũ�� ���
		RECT rect = { 0,0,mWidth,mHeight };
		AdjustWindowRect(&rect, WS_OVERLAPPEDWINDOW, false);

		//������ ũ�� ���� �� ���
		SetWindowPos(mHwnd, nullptr, 50, 50, (rect.right - rect.left), (rect.bottom - rect.top), 0);
		ShowWindow(hWnd, true);

		mBackBuffer = CreateCompatibleBitmap(mHdc, mWidth, mHeight);
		mBackHdc = CreateCompatibleDC(mHdc);
		HBITMAP defaultBitmap = (HBITMAP)SelectObject(mBackHdc, mBackBuffer);
		DeleteObject(defaultBitmap);

		time::initialize();
		keyInput::initialize();
		sceneManager::initialize();
	}

	void application::run()
	{
		update();
		render();
	}

	void application::update()
	{
		time::update();
		keyInput::update();
		sceneManager::update();
	}

	void application::render()
	{
		//clear
		backgroundBlack();

		time::render(mBackHdc);
		keyInput::render(mBackHdc);
		sceneManager::render(mBackHdc);

		//����� �̹��� ���� ��, ���� ���ۿ� �̹����� �����ؾ� �Ѵ�.
		BitBlt(mHdc, 0, 0, mWidth, mHeight, mBackHdc, 0, 0, SRCCOPY);
	}
	void application::backgroundBlack()
	{
		HBRUSH grayBrush = CreateSolidBrush(RGB(0, 0, 0));
		HBRUSH oldbrush = (HBRUSH)SelectObject(mBackHdc, grayBrush);
		Rectangle(mBackHdc, -1, -1, 1602, 902);
		SelectObject(mBackHdc, oldbrush);
		DeleteObject(grayBrush);
	};
}
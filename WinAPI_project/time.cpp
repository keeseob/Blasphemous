#include "time.h"
#include "application.h"

extern BP::application bp_application;

namespace BP
{
	double time::mDeltaTime = 0.0l;
	double time::mSecond = 0.0f;
	LARGE_INTEGER time::mCpuFrequency = {};
	LARGE_INTEGER time::mPrevFrequency = {};
	LARGE_INTEGER time::mCurrFrequency = {};

	void time::initialize()
	{
		//CPU�� ���� ���� �� ��������.
		QueryPerformanceFrequency(&mCpuFrequency);
		//���α׷� ���� �ÿ� ���� ��.
		QueryPerformanceCounter(&mPrevFrequency);
	}

	void time::update()
	{
		//���� ���� ��.
		QueryPerformanceCounter(&mCurrFrequency);
		double diffFrequency = mCurrFrequency.QuadPart - mPrevFrequency.QuadPart;

		mDeltaTime = diffFrequency / mCpuFrequency.QuadPart;
		mPrevFrequency.QuadPart = mCurrFrequency.QuadPart;
	}

	void time::render(HDC hdc)
	{
		mSecond += mDeltaTime;
		if (mSecond > 1.0f)
		{
			HWND hWnd = bp_application.getHwnd();

			wchar_t szFloat[50] = {};
			float fps = 1.0f / (float)mDeltaTime;
			swprintf_s(szFloat, 50, L"FPS: %d", (UINT)fps);
			SetWindowText(hWnd, szFloat);

			mSecond = 0.0f;
		}
	}
}

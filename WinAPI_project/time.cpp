<<<<<<< HEAD
#include "time.h"

namespace BP
{
	double time::mDeltaTime = 0.01;
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
	}
}
=======
#include "time.h"

namespace BP
{
	double time::mDeltaTime = 0.01;
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
	}
}
>>>>>>> bfdcdd2571c3c5f275f705fa45aa3757efbf6e94

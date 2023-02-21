#pragma once
#include "includePack.h"

namespace BP
{
	class time
	{
	public:
		static void initialize();
		static void	update();
		static void render(HDC hdc);

		static double deltaTime()
		{
			return mDeltaTime;
		}

	private:
		static double mDeltaTime;
		static LARGE_INTEGER mCpuFrequency;
		static LARGE_INTEGER mPrevFrequency;
		static LARGE_INTEGER mCurrFrequency;
	};
}
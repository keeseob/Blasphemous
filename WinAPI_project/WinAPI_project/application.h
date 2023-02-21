#pragma once
#include "engine.h"

namespace BP
{
	class application
	{
	public:
		application();
		~application();

		void initialize(HWND hWnd);
		void run();
		void update();
		void render();

		//HWND GetHwnd() { return mHwnd; }
		//void release();

	private:
		HWND mHwnd;
		HDC mHdc;

		vector2 mPosition;
	};
} 
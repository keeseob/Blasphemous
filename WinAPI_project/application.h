<<<<<<< HEAD
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
=======
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
>>>>>>> bfdcdd2571c3c5f275f705fa45aa3757efbf6e94
} 
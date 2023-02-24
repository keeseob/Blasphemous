#pragma once
#include "engine.h"

namespace BP
{
	enum class eKeyCode
	{
		Q, W, E, R, T, Y, U, I, O, P,
		A, S, D, F, G, H, J, K, L,
		Z, X, C, V, B, N, M,
		END,
	};

	enum class eKeyState
	{
		down,
		pressed,
		up,
		none,
	};

	class keyInput
	{
	public:
		struct key
		{
			eKeyCode keyCode;
			eKeyState keyState;
			bool pressCheck;
		};

		static void initialize();
		static void update();
		static void render(HDC hdc);

		inline static eKeyState getKeyState(eKeyCode keyCode) //키 상태를 전역 사용 가능
		{
			return mKey[(UINT)keyCode].keyState;
		};
		//inline?

	private:
		static std::vector<key> mKey;
	};
}
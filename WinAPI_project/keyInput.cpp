#include "keyInput.h"

namespace BP
{
	int ASCII[(UINT)eKeyCode::END] =
	{
		'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P',
		'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L',
		'Z', 'X', 'C', 'V', 'B', 'N', 'M',
	};

	std::vector<keyInput::key> mKey;

	void keyInput::initialize()
	{
		for (UINT i = 0; i < (UINT)eKeyCode::END; i++)
		{
			key keyInfo;
			keyInfo.keyCode = (eKeyCode)i;
			keyInfo.keyState = eKeyState::none;
			keyInfo.pressCheck = false;

			mKey.push_back(keyInfo);
		}
	}
	void keyInput::update()
	{
		for (UINT i = 0; i < (UINT)eKeyCode::END; i++)
		{
			if (GetKeyState(ASCII[i]) & 0x8000)
			{
				if (mKey[i].pressCheck)
				{
					mKey[i].keyState = eKeyState::pressed;
				}
				else
				{
					mKey[i].keyState = eKeyState::down;
				}
				mKey[i].pressCheck = true;
			}
			else
			{
				if (mKey[i].pressCheck)
				{
					mKey[i].keyState = eKeyState::up;
				}
				else
				{
					mKey[i].keyState = eKeyState::none;
				}
				mKey[i].pressCheck = false;
			}
		}

	}
	void keyInput::render(HDC hdc)
	{

	}

}
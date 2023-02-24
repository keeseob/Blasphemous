#include "keyInput.h"

namespace BP
{
	int ASCII[(UINT)eKeyCode::END] =
	{
		'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P',
		'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L',
		'Z', 'X', 'C', 'V', 'B', 'N', 'M',
	};

	std::vector<keyInput::key> keyInput::mKey;

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
			if (GetAsyncKeyState(ASCII[i]) & 0x8000) //���� Ű���带 ������ �ִ� ���
				//GetAsyncKeyState: ���� Ű ���¸� �˸��� �Լ�
			{
				if (mKey[i].pressCheck) //���� �����ӿ� Ű�� �������� ���
				{
					mKey[i].keyState = eKeyState::pressed; //press�ν�
				}
				else //���� �����ӿ� Ű�� �������� ���� ���
				{
					mKey[i].keyState = eKeyState::down; //down�ν�
				}
				mKey[i].pressCheck = true;
			}
			else //���� Ű���带 ������ �ʴ� ���
			{
				if (mKey[i].pressCheck) //���� �����ӿ� Ű�� �����ִ� ���
				{
					mKey[i].keyState = eKeyState::up; //up�ν�
				}
				else //���� �����ӿ� Ű�� �������� ���� ���
				{
					mKey[i].keyState = eKeyState::none; //none����
				}
				mKey[i].pressCheck = false;
			}
		}
	}
	void keyInput::render(HDC hdc)
	{

	}
}
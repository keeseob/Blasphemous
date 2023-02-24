#include "application.h"
#include "image_panitentOne.h"

extern BP::application bp_application;

namespace BP
{
	image_panitentOne::image_panitentOne()
		: mBitmap(NULL), mHdc(NULL), mWidth(0), mHeight(0)
	{
	}
	image_panitentOne::~image_panitentOne()
	{
	}

	HRESULT image_panitentOne::load(const std::wstring& path)
	{
		mBitmap = (HBITMAP)LoadImageW
		(nullptr, path.c_str(), IMAGE_BITMAP, 0.1, 0.1, LR_LOADFROMFILE | LR_CREATEDIBSECTION);

		if (mBitmap == nullptr)
		{
			return E_FAIL;
		}

		BITMAP bitInfo = {};
		GetObject(mBitmap, sizeof(BITMAP), &bitInfo);

		mWidth = bitInfo.bmWidth;
		mHeight = bitInfo.bmHeight;

		HDC mainDc = bp_application.getHdc();
		mHdc = CreateCompatibleDC(mainDc);

		HBITMAP oldBitmap = (HBITMAP)SelectObject(mHdc, mBitmap);
		DeleteObject(oldBitmap);

		return S_OK;
	}
}

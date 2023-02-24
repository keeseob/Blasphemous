#pragma once
#include "bpResource.h"

namespace BP
{
	class image_panitentOne : public bpResource
	{
	public:
		image_panitentOne();
		~image_panitentOne();

		virtual HRESULT load(const std::wstring& path) override;

		HDC getHdc()
		{
			return mHdc;
		}
		HBITMAP getBitmap()
		{
			return mBitmap;
		}
		UINT getWidth()
		{
			return mWidth;
		}
		UINT getHeight()
		{
			return mHeight;
		}
	private:
		HBITMAP mBitmap;
		HDC mHdc;
		UINT mWidth;
		UINT mHeight;
	};
}
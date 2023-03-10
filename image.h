#pragma once
#include "bpResource.h"

namespace BP
{
	class image : public bpResource
	{
	public:
		static image* create(const std::wstring& name, UINT width, UINT height);

		image();
		~image();

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
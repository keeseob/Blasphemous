#pragma once
#include "component.h"

namespace BP
{
	class transformation : public component
	{
	public:
		transformation();
		~transformation();

		virtual void initialize() override;
		virtual void update() override;
		virtual void render(HDC hdc) override;
		virtual void release() override;

		void setPosition(vector2 position)
		{
			mPosition = position;
		}
		void setSize(vector2 size)
		{
			mSize = size;
		}
		vector2 getPosition()
		{
			return mPosition;
		}
		vector2 getSize()
		{
			return mSize;
		}

	private:
		vector2 mPosition;
		vector2 mSize;
	};
}
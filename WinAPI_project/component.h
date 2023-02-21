#pragma once
#include "entity.h"

namespace BP
{
	class component :public entity
	{
	public:
		virtual void initialize();
		virtual void update();
		virtual void render(HDC hdc);
		virtual void release();

	private:
	};
}


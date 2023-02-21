<<<<<<< HEAD
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

=======
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

>>>>>>> bfdcdd2571c3c5f275f705fa45aa3757efbf6e94

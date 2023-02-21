<<<<<<< HEAD
#pragma once
#include "entity.h"
#include "layer.h"

namespace BP
{
	class scene :public entity
	{
	public:
		scene();
		virtual ~scene();

		virtual void initialize();
		virtual void update();
		virtual void render(HDC hdc);
		virtual void release();
		
		void addObject(object* obj, eLayerType lyr);

	private:
		std::vector<layer> mLayer;
	};
}
=======
#pragma once
#include "entity.h"
#include "layer.h"

namespace BP
{
	class scene :public entity
	{
	public:
		scene();
		virtual ~scene();

		virtual void initialize();
		virtual void update();
		virtual void render(HDC hdc);
		virtual void release();
		
		void addObject(object* obj, eLayerType lyr);

	private:
		std::vector<layer> mLayer;
	};
}
>>>>>>> bfdcdd2571c3c5f275f705fa45aa3757efbf6e94

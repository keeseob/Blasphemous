<<<<<<< HEAD
#pragma once
#include "entity.h"
#include "component.h"

namespace BP
{
	class object :public entity
	{
	public:
		object();
		virtual ~object();

		virtual void initialize();
		virtual void update();
		virtual void render(HDC hdc);
		virtual void release();

	protected:
		vector2 mPosition;

	private:
		std::vector<component*> mComponent;
	};
=======
#pragma once
#include "entity.h"
#include "component.h"

namespace BP
{
	class object :public entity
	{
	public:
		object();
		virtual ~object();

		virtual void initialize();
		virtual void update();
		virtual void render(HDC hdc);
		virtual void release();

	protected:
		vector2 mPosition;

	private:
		std::vector<component*> mComponent;
	};
>>>>>>> bfdcdd2571c3c5f275f705fa45aa3757efbf6e94
}
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
}
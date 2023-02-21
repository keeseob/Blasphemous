#pragma once
#include "entity.h"
#include "object.h"

namespace BP
{
	class layer : public entity
	{
	public:
		layer();
		virtual ~layer();

		virtual void initialize();
		virtual void update();
		virtual void render(HDC hdc);
		virtual void release();

		void addObject(object* obj);

	private:
		std::vector<object*>mObject;
	};
}
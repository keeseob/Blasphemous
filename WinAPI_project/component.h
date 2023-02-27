#pragma once
#include "entity.h"

namespace BP
{
	class component : public entity
	{
	public:
		component(eComponentType type);
		~component();

		virtual void initialize();
		virtual void update();
		virtual void render(HDC hdc);
		virtual void release();

		eComponentType getType()
		{
			return mType;
		}

	private:
		const eComponentType mType;
	};
}

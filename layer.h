#pragma once
#include "entity.h"
#include "gameObject.h"

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

		void addObject(gameObject* gobj);
		const std::vector<gameObject*>& getObject()
		{
			return mGameObject;
		}
	private:
		std::vector<gameObject*> mGameObject;
	};
}
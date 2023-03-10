#pragma once
#include "entity.h"
#include "layer.h"

namespace BP
{
	class scene : public entity
	{
	public:
		scene();
		virtual ~scene();

		virtual void initialize();
		virtual void update();
		virtual void render(HDC hdc);
		virtual void release();

		virtual void onEnter();
		virtual void onExit();
		
		void addObject(gameObject* gobj, eLayerType lyr);
		const std::vector<gameObject*>& getObject(eLayerType lyr);

	private:
		std::vector<layer> mLayer;
	};
}

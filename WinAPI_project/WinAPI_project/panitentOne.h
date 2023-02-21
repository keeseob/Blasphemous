#pragma once
#include "object.h"

namespace BP
{
	class panitentOne : public object
	{
	public:
		panitentOne();
		~panitentOne();

		virtual void initialize() override;
		virtual void update() override;
		virtual void render(HDC hdc) override;
		virtual void release() override;

	private:
	};
}
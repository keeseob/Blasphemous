#pragma once
#include "gameObject.h"
#include "image.h"

namespace BP
{
	class bossBackground : public gameObject
	{
	public:
		bossBackground();
		~bossBackground();

		virtual void initialize() override;
		virtual void update() override;
		virtual void render(HDC hdc) override;
		virtual void release() override;

	private:
		image* mImage;
	};
}
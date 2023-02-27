#pragma once
#include "object.h"
#include "image_panitentOne.h"

namespace BP
{
	class background : public object
	{
	public:
		background();
		~background();

		virtual void initialize() override;
		virtual void update() override;
		virtual void render(HDC hdc) override;
		virtual void release() override;

	private:
		image_panitentOne* mImage;
	};
}
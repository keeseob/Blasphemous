#pragma once
#include "scene.h"

namespace BP
{
	class actionScene : public scene
	{
	public:
		actionScene();
		~actionScene();

		virtual void initialize() override;
		virtual void update() override;
		virtual void render(HDC hdc) override;
		virtual void release() override;

	private:

	};

}


#pragma once
#include "scene.h"

namespace BP
{
	class panitentOne;
	class background;
	class actionScene : public scene
	{
	public:
		actionScene();
		~actionScene();

		virtual void initialize() override;
		virtual void update() override;
		virtual void render(HDC hdc) override;
		virtual void release() override;

		virtual void onEnter() override;
		virtual void onExit() override;

	private:
		panitentOne* mPanitentOne;
		background* mBackground;
	};
}


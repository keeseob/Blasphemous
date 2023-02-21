<<<<<<< HEAD
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

=======
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

>>>>>>> bfdcdd2571c3c5f275f705fa45aa3757efbf6e94

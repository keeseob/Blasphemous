#pragma once
#include "entity.h"

namespace BP
{
	class image;
	class animator;
	class animation : public entity
	{
	public:
		struct sprite
		{
			vector2 leftTop; //���ӿ����� 0,0���� �����ϸ� ��Ȯ�ϰԴ� ���� �ʴ´�.
			vector2 size;
			vector2 offset;
			float duration;

			sprite() :
				leftTop(vector2::zero)
				, size(vector2::zero)
				, offset(vector2::zero)
				, duration(0.0f)
			{
			}
		};

		animation();
		~animation();

		void initialize();
		void update();
		void render(HDC hdc);
		void create(image* sheet, vector2 leftTop, UINT coulmn, UINT row, UINT spriteLength, vector2 offset, float duration);
		void reset();

		bool isComplete()
		{
			return mbComplete;
		}
		void setAnimator(animator* anit)
		{
			mAnimator = anit;
		}

	private:
		animator* mAnimator;
		image* mSheetImage;
		std::vector<sprite> mSpriteSheet;
		float mTime;
		bool mbComplete;
		int mSpriteIndex;
	};
}
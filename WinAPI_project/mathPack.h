#pragma once

struct vector2
{
	float x;
	float y;

	vector2()
		: x(0.0f)
		, y(0.0f)
	{
	}
	vector2(int x, int y)
		: x(x)
		, y(y)
	{
	}
	vector2(const vector2&) = default;
	vector2& operator=(const vector2&) = default;

	vector2(vector2&&) = default;
	vector2& operator=(vector2&&) = default;
};


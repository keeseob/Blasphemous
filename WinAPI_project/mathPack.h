<<<<<<< HEAD
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
	vector2(vector2& other)
		: x(other.x)
		, y(other.y)
	{
	}
};

=======
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
	vector2(vector2& other)
		: x(other.x)
		, y(other.y)
	{
	}
};

>>>>>>> bfdcdd2571c3c5f275f705fa45aa3757efbf6e94

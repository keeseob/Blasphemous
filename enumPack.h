#pragma once

enum class eSceneType
{
	title,
	play,
	begining,
	ending,
	end,
};

enum class eLayerType
{
	background,
	monster,
	player,
	projectile,
	test,
	effect,
	UI,
	end = 16,
};

enum class eComponentType
{
	transformation,
	spriteRender,
	animator,
	collider,
	audio,
	end,
};
#pragma once

#include "raylib.h"

class Ball
{
public:
	Ball();
	~Ball();

	void update();
	void render();

	Vector2 ballPos, ballSpeed;
	float radius;

private:
	void initTextures();
	void initVariables();

	void unload();
};
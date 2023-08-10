#pragma once

#include "raylib.h"

class Ball
{
public:
	Ball();
	~Ball();

	void update();
	void render();
private:
	void initTextures();
	void initVariables();

	Vector2 ballPos, ballSpeed;
	float radius;

	void unload();
};
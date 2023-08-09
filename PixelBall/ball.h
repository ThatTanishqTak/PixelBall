#pragma once

#include "raylib.h"

class Ball
{
public:
	Ball();
	~Ball();

	void update();
	void render();

	Texture2D ball;

private:
	void initTextures();
	void initVariables();

	void unload();
};
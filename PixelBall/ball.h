#pragma once

#include "raylib.h"
#include "player.h"

class Player;

class Ball
{
public:
	Ball();
	~Ball();

	void update();
	void render();

private:
	Player* play_obj;

	void initTextures();
	void initVariables();

	Vector2 ballPos, ballSpeed;
	float radius;

	void unload();
};
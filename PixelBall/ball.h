#pragma once

#include <iostream>
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

	Vector2 ballPos, ballSpeed;
	float radius;

	bool isPlayerTouching;

private:
	Player* player_obj;

	void initTextures();
	void initVariables();

	void unload();
};
#pragma once

#include "raylib.h"
#include "raymath.h"
#include "ball.h"

class Ball;

class Player
{
public:
	Player();
	~Player();

	void update();
	void render();

	Rectangle player;

private:
	Ball* ball_obj_2;

	void initTextures();
	void initVariables();

	bool isShooting;
	void shootBall();

	Vector2 playerSpeed, playerPos;

	void unload();
};
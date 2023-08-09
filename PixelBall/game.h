#pragma once

#include "raylib.h"
#include "UI.h"
#include "player.h"
#include "ball.h"

class UI;
class Player;
class Ball;

class Game
{
public:
	Game();
	~Game();

	int windowWidth, windowHeight;

	void run();

private:
	UI* ui_obj;
	Player* ply_obj;
	Ball* ball_obj;

	void initTextures();
	void initVariables();
	void initScreen();

	void update();
	void render();

	void unload();
};
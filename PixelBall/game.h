#pragma once

#include "raylib.h"
#include "UI.h"

class UI;

class Game
{
public:
	Game();
	~Game();

	int windowWidth, windowHeight;

	void run();

private:
	UI* ui_obj;

	void initTextures();
	void initVariables();
	void initScreen();

	void update();
	void render();

	void unload();
};
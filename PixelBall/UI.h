#pragma once

#include <sstream>
#include "raylib.h"

class UI
{
public:
	UI();
	~UI();

	void update();
	void render();

private:
	int score;
	std::stringstream scoreText;

	void initTextures();
	void initvariables();

	void unload();
};
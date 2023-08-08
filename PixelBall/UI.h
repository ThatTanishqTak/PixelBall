#pragma once

#include "raylib.h"

class UI
{
public:
	UI();
	~UI();

	Texture2D background;

	void update();
	void render();

private:
	void initTextures();
	void initvariables();

	void unload();
};
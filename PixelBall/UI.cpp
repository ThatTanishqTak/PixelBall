#include "UI.h"

UI::UI()
{
	initTextures();
	initvariables();
}

UI::~UI()
{
	unload();
}

void UI::update()
{

}

void UI::render()
{
	DrawTexture(background, 0, 0, WHITE);
}

void UI::initTextures()
{
	background = LoadTexture("Textures/Background/background.png");
}

void UI::initvariables()
{

}

void UI::unload()
{
	UnloadTexture(background);
}
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
	DrawText(("Score: " + std::to_string(score)).c_str(), 0, 0, 24, GREEN);	
	DrawLine(540, 0, 540, 720, WHITE);
}

void UI::initTextures()
{

}

void UI::initvariables()
{
	score = 0;
}

void UI::unload()
{

}
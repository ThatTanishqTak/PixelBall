#include "game.h"

Game::Game()
{
	initTextures();
	initVariables();
	initScreen();

	ui_obj = new UI();
}

Game::~Game()
{
	unload();
	CloseWindow();
}

void Game::run()
{
	while (!WindowShouldClose())
	{
		update();
		render();
	}
}

void Game::initTextures()
{

}

void Game::initVariables()
{
	windowWidth = 1080;
	windowHeight = 720;
}

void Game::initScreen()
{
	InitWindow(windowWidth, windowHeight, "PixelBall");
	SetTargetFPS(60);
}

void Game::update()
{
	ui_obj->update();
}

void Game::render()
{
	BeginDrawing();
	ClearBackground(BLACK);

	ui_obj->render();

	EndDrawing();
}

void Game::unload()
{
	delete ui_obj;
}
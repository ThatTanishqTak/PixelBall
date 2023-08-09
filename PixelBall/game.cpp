#include "game.h"

Game::Game()
{
	initTextures();
	initVariables();
	initScreen();

	ui_obj = new UI();
	ply_obj = new Player();
	ball_obj = new Ball();
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
	ply_obj->update();
	ball_obj->update();
}

void Game::render()
{
	BeginDrawing();
	ClearBackground(BLACK);

	ui_obj->render();
	ply_obj->render();
	ball_obj->render();

	EndDrawing();
}

void Game::unload()
{
	delete ui_obj;
	delete ply_obj;
	delete ball_obj;
}
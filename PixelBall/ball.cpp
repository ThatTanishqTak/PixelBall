#include "ball.h"

Ball::Ball()
{
	initTextures();
	initVariables();
}

Ball::~Ball()
{
	unload();
}

void Ball::update()
{

}

void Ball::render()
{
	DrawTexture(ball, 540, 360, WHITE);
}

void Ball::initTextures()
{
	ball = LoadTexture("Textures/Ball/ball.png");
}

void Ball::initVariables()
{

}

void Ball::unload()
{
	UnloadTexture(ball);
}
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
	ballPos.x += ballSpeed.x * GetFrameTime();
	ballPos.y += ballSpeed.y * GetFrameTime();
}

void Ball::render()
{
	DrawCircle(ballPos.x, ballPos.y , 20.0f, WHITE);
}

void Ball::initTextures()
{

}

void Ball::initVariables()
{
	ballPos = { 540.0f, 360.0f };
	ballSpeed = { 50.0f, 50.0f };
}

void Ball::unload()
{

}
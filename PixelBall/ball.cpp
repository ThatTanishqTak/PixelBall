#include "ball.h"

Ball::Ball()
{
	initTextures();
	initVariables();

	play_obj = new Player();
}

Ball::~Ball()
{
	unload();
}

void Ball::update()
{

	ballPos.x -= ballSpeed.x * GetFrameTime();
	ballPos.y -= ballSpeed.y * GetFrameTime();

	if (ballPos.x <= 0)
		ballPos.x = 0;
	if (ballPos.x + radius >= 1080)
		ballPos.x = 1080 - radius;
	if (ballPos.y <= 0)
		ballPos.y = 0;
	if (ballPos.y + radius >= 720)
		ballPos.y = 720 - radius;
}

void Ball::render()
{
	DrawCircle(ballPos.x, ballPos.y , radius, WHITE);
}

void Ball::initTextures()
{

}

void Ball::initVariables()
{
	radius = 20.0f;
	ballPos = { 540.0f, 360.0f };
	ballSpeed = { 100.0f, 100.0f };
}

void Ball::unload()
{
	delete play_obj;
}
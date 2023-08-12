#include "ball.h"

Ball::Ball()
{
	initTextures();
	initVariables();

    player_obj = new Player();
}

Ball::~Ball()
{
	unload();
}

void Ball::update()
{
    if (ballPos.x - radius <= 0) 
        ballPos.x = radius;
    if (ballPos.x + radius >= 1080) 
        ballPos.x = 1080 - radius;
    if (ballPos.y - radius <= 0) 
        ballPos.y = radius;
    if (ballPos.y + radius >= 720) 
        ballPos.y = 720 - radius;

    std::cout << CheckCollisionCircleRec({ ballPos.x, ballPos.y }, radius, player_obj->player) << std::endl;
}

void Ball::render()
{
	DrawCircle(static_cast<int>(ballPos.x), static_cast<int>(ballPos.y) , radius, WHITE);
}

void Ball::initTextures()
{

}

void Ball::initVariables()
{
	radius = 20.0f;
	ballPos = { 540.0f, 360.0f };
	ballSpeed = { 100.0f, 100.0f };

    isPlayerTouching = false;
}

void Ball::unload()
{
    delete player_obj;
}
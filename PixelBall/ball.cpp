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
    if (ballPos.x - radius <= 0) 
        ballPos.x = radius;
    if (ballPos.x + radius >= 1080) 
        ballPos.x = 1080 - radius;
    if (ballPos.y - radius <= 0) 
        ballPos.y = radius;
    if (ballPos.y + radius >= 720) 
        ballPos.y = 720 - radius;
}

void Ball::render()
{
	DrawCircle(ballPos.x, ballPos.y , radius, WHITE);
}

Vector2 Ball::getPosition() const
{
    return ballPos;
}

void Ball::setPosition(const Vector2& newPos)
{
    ballPos = newPos;
}

Vector2 Ball::getSpeed() const
{
    return ballSpeed;
}

void Ball::setSpeed(const Vector2& newSpeed)
{
    ballSpeed = newSpeed;
}

Rectangle Ball::getCollisionRect() const
{
    return { ballPos.x - radius, ballPos.y - radius, radius * 2, radius * 2 };
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

}
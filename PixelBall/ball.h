#pragma once

#include "raylib.h"

class Ball
{
public:
	Ball();
	~Ball();

	void update();
	void render();

	Vector2 ballPos, ballSpeed;
	float radius;

	Vector2 getPosition() const;
	void setPosition(const Vector2& newPos);

	Vector2 getSpeed() const;
	void setSpeed(const Vector2& newSpeed);

	Rectangle getCollisionRect() const;

private:
	void initTextures();
	void initVariables();

	void unload();
};
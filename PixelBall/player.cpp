#include "player.h"

Player::Player()
{
	initTextures();
	initVariables();

	ball_obj_2 = new Ball();
}

Player::~Player()
{
	unload();
}

void Player::update()
{
	if (IsKeyDown(KEY_W))
		playerPos.y -= playerSpeed.y * GetFrameTime();
	if (IsKeyDown(KEY_S))
		playerPos.y += playerSpeed.y * GetFrameTime();
	if (IsKeyDown(KEY_A))
		playerPos.x -= playerSpeed.x * GetFrameTime();
	if (IsKeyDown(KEY_D))
		playerPos.x += playerSpeed.x * GetFrameTime();

	if (playerPos.x <= 0)
		playerPos.x = 0;
	if (playerPos.x + player.width >= 1080)
		playerPos.x = 1080 - player.width;
	if (playerPos.y <= 0)
		playerPos.y = 0;
	if (playerPos.y + player.height >= 720)
		playerPos.y = 720 - player.height;

	if (IsKeyPressed(KEY_X) && CheckCollisionRecs(player, ball_obj_2->getCollisionRect()))
		isShooting = true;

	if (isShooting)
	{
		shootBall();
		isShooting = false;
	}
}

void Player::render()
{
	DrawRectangle(playerPos.x, playerPos.y, player.width, player.height, BLUE);
}

void Player::initTextures()
{
	player = { playerPos.x, playerPos.y, 50.0f, 50.0f };
}

void Player::initVariables()
{
	playerPos = { 0.0f, 360.0f };
	playerSpeed = { 350.0f, 350.0f };

	isShooting = false;
}

void Player::shootBall()
{
	Vector2 shootingDirection = Vector2Normalize(Vector2Subtract(ball_obj_2->getPosition(), playerPos));
	ball_obj_2->setPosition(Vector2Add(playerPos, Vector2Scale(shootingDirection, player.width)));
	ball_obj_2->setSpeed(Vector2Scale(shootingDirection, ball_obj_2->ballSpeed.x));
}

void Player::unload()
{
	delete ball_obj_2;
}
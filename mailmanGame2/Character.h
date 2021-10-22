#pragma once


class Character
{
private:


public:
	int speed;
	float screenPosX;
	float screenPosY;
	int tileX;
	int tileY;

	void move(float x, float y);
};

//test

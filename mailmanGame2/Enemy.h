#pragma once
#include "Character.h"


class Ghost
{
private:
	int hungerLeft;

public:

	void loseHunger(int hunger);
	void chasePlayer();
	void hitPlayer();
};
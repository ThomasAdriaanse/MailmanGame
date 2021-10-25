#pragma once
#include "Character.h"


class Dog
{
private:
	int hungerLeft;

public:

	void loseHunger(int hunger);
	void chasePlayer();
	void hitPlayer();
};
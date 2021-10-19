#pragma once
#include "Character.h"


class Player
{
private:
	int health;

public:

	void pickUpPackages(int packages);
	void dropOffPackage();
};
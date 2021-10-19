#pragma once
#include "SFML/Graphics.hpp"

class Engine {

private:

public:
	static void initializeGame();
	static bool isRunning();
	static void pauseGame();
	static void render();
};
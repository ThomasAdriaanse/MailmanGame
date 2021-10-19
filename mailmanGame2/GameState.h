#pragma once

class GameState
{
private:
	int gameState;

public:
	void pauseGame();
	void resumeGame();
	void executeCutscene();
};
#pragma once

class Map
{
private:
	int mapSize;
	int levelNumber;

public:
	void generateMap(int mapSizeX, int mapSizey);
	void goToNextLevel(int levelNumber);
};
/*
 * Used as a world class for the Game. 
 * Will contain almost everything.
 */

#pragma once
#include "ThreadWriting.h"

class Game
{
public:
	Game();
	~Game();
	void init();
private:
	int mKarma;
	int mHealth;
};


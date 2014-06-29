/*
 * Used as a world class for the Game. 
 * Will contain almost everything.
 */

#pragma once
#include "ThreadWriting.h"
#include "Characters.h"
#include "Item.h"
#include "Inventory.h"
#include "Chapters.h"

class Game
{
public:
	Game();
	~Game();
	void init();
	static bool initCharacters();
private:
	void play();
	void displayHelp();

	std::string		mName;
	int				mKarma;
	int				mHealth;
	ThreadWriting	tw;
};


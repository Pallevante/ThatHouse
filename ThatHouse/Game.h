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
#include "Stephen.h"
#include "UserInput.h"
#include "Story.h"

class Game
{
	// So game AI has access to health and karma.
	friend class GameAI;
public:
	Game();
	~Game();
	void init();
	void start();
	bool initCharacters();

private:
	void play();
	void displayHelp();
	std::string		mName;
	static int		mKarma;
	static int		mHealth;
	ThreadWriting	tw;
};


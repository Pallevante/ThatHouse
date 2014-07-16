/*
 * Used as a world class for the Game. 
 * Will contain almost everything.
 */
#pragma once
#include "Characters.h"
#include "Stephen.h"
#include "ThreadWriting.h"
#include "Inventory.h"
#include "Chapters.h"
#include "UserInput.h"
#include "Story.h"
#include "Room.h"

class Game
{
	// So game AI has access to health and karma.
	friend class GameAI;
	friend class UserInput;
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
	static Room*	mCurrentRoom;
};


#include "Game.h"


Game::Game()
{}


Game::~Game()
{}

void Game::init()
{
	system("Title ThatHouse");
	tw.write("This is a text based game (no-shit) with some horror elements.\n\n"
		"If the title contains 'Choice' then you have to decide what to do.\nIn most cases you can type 'what to do?' and you'll get a hint.\n"
		"Bevare that if you're low on 'karma' the game might be grumpy.\n\nIf the text begins with >> then someone talks to you.");
	play();
}

void Game::play()
{
	// If this happends then the vectors is probably on a bad memory address nothing to do about it.
	if (!Inventory::init())
		tw.write("\nERROR WHILE INITIALIZING - SOMETHING BROKE :(\n\nTry launching the game again!");
	// If this happends, I fucked something up or the same reason as above.
	if (!initCharacters())
		tw.write("ERROR WHILE INITIALIZING - SOMETHING BROKE :(\n\nThe characters couldn't be initialized, Game totally broken contact me.");

}

bool Game::initCharacters()
{

}
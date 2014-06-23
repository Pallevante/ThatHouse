#include "Game.h"
#include "Item.h"
#include "Inventory.h"

Game::Game()
{}


Game::~Game()
{}

void Game::init()
{
	system("Title ThatHouse");
	ThreadWriting::write("This is a text based game (no-shit) with some horror elements.\n\n"
		"If the title contains 'Choice' then you have to decide what to do.\nIn most cases you can type 'what to do?' and you'll get a hint.\n"
		"Bevare that if you're low on 'karma' the game might be grumpy.\n\nIf the text begins with >> then someone talks to you.");
	play();
}

void Game::play()
{
	if (!Inventory::init())
		ThreadWriting::write("\nERROR WHILE INITIALIZING - GAME IS BROKEN :(");
	getchar();
}
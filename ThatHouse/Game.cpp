#include "Game.h"
#include "Note.h"
// Sound is windows only.
#ifdef _WIN32
	#include "Sound.h"
#endif

Room* Game::mCurrentRoom;
int Game::mKarma;
int Game::mHealth;

Game::Game()
{}


Game::~Game()
{}

void Game::start()
{
	system("Title ThatHouse");
	tw.write("Welcome to the game ThatHouse.\n\nAre you ready?\n1) Play\n2) View help");

	// Sound is currently windows only.
	#ifdef _WIN32
		Sound* mSound = new Sound("assets/song.wav");
		mSound->playSound();
	#endif
	

	int response;
	cin >> response;
	if (response == 1)
		init();
	else if (response == 2)
		displayHelp();
	else
		start();
}

void Game::init()
{
	// If this happends then the vectors is probably on a bad memory address nothing to do about it.
	if (!Inventory::init())
		tw.write("ERROR WHILE INITIALIZING - SOMETHING BROKE :(\n\nTry launching the game again!");

	// If this happends, I fucked something up or the same reason as above.
	if (!initCharacters())
		tw.write("ERROR WHILE INITIALIZING - SOMETHING BROKE :(\n\nThe characters couldn't be initialized, Game totally broken contact me.");
	
	play();
}

void Game::play()
{
	bool _quit = false;
	while (!_quit)
	{
		mCurrentRoom = new Room(mCurrentRoom->getRoomType());
		tw.write(Story::getStory());		
		UserInput::userInput();
		tw.wait();
	}
}


void Game::displayHelp()
{
	tw.write("This is a text based adventure game with some horror elements.\n\n"
		"If the title contains 'Choice' then you have to decide what to do.\nIn most cases you can type 'what to do?' and you'll get a hint.\n"
		"Bevare that if you're low on 'karma' the game might be grumpy.\n\nIf the text begins with >> then someone talks to you.");
	tw.wait();
	tw.wait();
	start();
}

bool Game::initCharacters()
{
	try
	{
		Characters::characterVector.push_back(new Stephen());
		return true;
	}
	catch (std::exception ex)
	{
		return false;
	}
}

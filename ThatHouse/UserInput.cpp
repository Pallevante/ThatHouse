#include "UserInput.h"
#include "Chapters.h"
#include "Characters.h"
#include <iostream>
#include <algorithm>
#include "Game.h"
void UserInput::userInput()
{
	std::string input;
	std::getline(std::cin, input);
	allToLower(input);

	if (contains(input, "translate"))
	{
		translate(input);
	}
	if (contains(input, "read"))
	{

	}
	if (contains(input, "check"))
	{
		Game::mCurrentRoom->checkRoom();
	}
}

void UserInput::allToLower(std::string& input)
{
	std::transform(input.begin(), input.end(), input.begin(), ::tolower);
}

bool UserInput::contains(std::string& input, std::string phrase)
{
	std::size_t found = input.find(phrase);
	if (found != std::string::npos)
	{
		return true;
	}
	else return false;
}

std::string UserInput::translate(std::string input)
{
	if (Characters::charachterFound(Characters::JUULI))
	{
		if (contains(input, "german"))
		{

		}
		if (contains(input, "swedish"))
		{

		}
		if (contains(input, "spanish"))
		{

		}
	}
	else
	{
		return "The character that can translate theese isn't here.";
	}
}
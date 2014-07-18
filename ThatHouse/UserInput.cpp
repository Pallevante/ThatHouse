#include "UserInput.h"
#include "Chapters.h"
#include "Characters.h"
#include <iostream>
#include <algorithm>
#include "Game.h"
#include "Note.h"

Note* UserInput::mNote;
ThreadWriting tw;
void UserInput::userInput()
{
	std::string input;
	std::getline(std::cin, input);
	allToLower(input);

	if (contains(input, "translate"))
	{
		tw.write(translate(input));
	}
	if (contains(input, "read"))
	{
		tw.write(read(input));
	}
	if (contains(input, "check"))
	{
		tw.write(Game::mCurrentRoom->checkRoom());
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

std::string UserInput::read(std::string input)
{
	if (contains(input, "german"))
	{
		for (auto i : Inventory::inventoryVector)
		{
			if (i->getType() == Item::NOTE)
			{
				mNote = mNote->returnNote(i);
				if (mNote->getLang() == Note::GERMAN)
				{
					return mNote->read();
				}
				else
					return "You haven't found that note yet.";
			}
		}
		return "You haven't picked up any notes.";
	}

	if (contains(input, "swedish"))
	{
		for (auto i : Inventory::inventoryVector)
		{
			if (i->getType() == Item::NOTE)
			{
				mNote = mNote->returnNote(i);
				if (mNote->getLang() == Note::SWEDISH)
				{
					return mNote->read();
				}
				else
					return "You haven't found that note yet.";
			}
		}		
		return "You haven't picked up any notes.";
	}

	if (contains(input, "spanish"))
	{
		for (auto i : Inventory::inventoryVector)
		{
			if (i->getType() == Item::NOTE)
			{
				mNote = mNote->returnNote(i);
				if (mNote->getLang() == Note::SPANISH)
				{
					return mNote->read();
				}
				else
					return "You haven't found that note yet.";
			}
			
		}
		return "You haven't picked up any notes.";
	}
	else
	{
		return "What language?";
	}
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
		else
		{
			return "There isn't a letter in that language..";
		}
	}
	else
	{
		return "The character that can translate theese isn't here.";
	}
}
#include "UserInput.h"
#include "Chapters.h"
#include "Characters.h"
#include "Game.h"
#include "Note.h"
#include "Player.h"
#include "Rock.h"

#include <iostream>
#include <algorithm>


Note* UserInput::mNote;
ThreadWriting tw;


// MAIN USER INPUT LOOP
void UserInput::userInput()
{
	bool isDoneWithPart = false;
	while (!isDoneWithPart)
	{
		tw.wait();
		std::string input;
		getline(cin, input);
		allToLower(input);
		
		// We need to check for curses because of politness
		if(contains(input, "fuck"))
		{
			Player::ammountOfCurses++;
		}
		if (contains(input, "inventory"))
		{
			tw.write(Inventory::check());
		}
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
			tw.write(check(input));
		}
		if (contains(input, "hit"))
		{
			tw.write(hit(input));
		}
		tw.wait();
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

std::string UserInput::check(std::string input)
{
	if (contains(input, "room"))
	{
		return Game::mCurrentRoom->checkRoom();
	}

	// Can only be done once
	if (contains(input, "pillow"))
	{
		if (Player::isTiedToBed &&
			Chapters::getChapter() == Chapters::CurrentChapter::FIRST
			&& Chapters::getPart() == Chapters::CurrentPart::FIRST_PART)
		{
			Inventory::inventoryVector.push_back(new Rock());
			return Inventory::inventoryVector[Inventory::inventoryVector.size() - 1]->getPickUpString();
		}
	}
	else
		return "Chech what?";
}

std::string UserInput::hit(std::string input)
{
	if (contains(input, "cuffs"))
	{
		if (Inventory::checkFor(Item::ROCK))
		{
			Player::isTiedToBed = false;
			Chapters::progressPart();
			return "After a while the cuffs break...";
		}
		else
			return "With what dummy?";
	}
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
			}
		}
		return "You haven't found that note yet.";
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
			}				
		}		
		return "You haven't found that note yet.";
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
			}
		}
		return "You haven't found that note yet.";
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
			for (auto i : Inventory::inventoryVector)
			{
				if (i->getType() == Item::NOTE)
				{
					mNote = mNote->returnNote(i);
					if (mNote->getLang() == Note::GERMAN)
					{
						return mNote->translate();
					}
				}
			}
			return "You haven't found that note yet.";
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
						return mNote->translate();
					}
				}
			}
			return "You haven't found that note yet.";
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
						return mNote->translate();
					}
				}
			}
			return "You haven't found that note yet.";
		}
		else
		{
			return "What language?";
		}
	}
	else
	{
		return "The character that can translate theese isn't here.";
	}
}
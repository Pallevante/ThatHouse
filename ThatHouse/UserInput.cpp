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
std::string UserInput::input;
bool UserInput::mIsDoneWithPart;


// MAIN USER INPUT LOOP
void UserInput::userInput()
{
	mIsDoneWithPart = false;
	while (!mIsDoneWithPart)
	{
		input.clear();
		tw.wait();
		getline(cin, input);
		allToLower(&input);
		if (input == "")
		{
			tw.write("I didn't get that.");
		}
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
		if (contains(input, "hit") || contains(input, "break"))
		{
			tw.write(hit(input));
		}
		else
		{
			tw.write("I didn't get that");
		}
	}
}

void UserInput::allToLower(std::string* input)
{
	std::transform(input->begin(), input->end(), input->begin(), ::tolower);
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

//
// String methods.
//

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
		return "Check what?";
}

std::string UserInput::hit(std::string input)
{
	if (contains(input, "cuff"))
	{
		if (Inventory::checkFor(Item::ROCK) && Player::isTiedToBed)
		{
			Player::isTiedToBed = false;
			Chapters::progressPart();
			mIsDoneWithPart = true;
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
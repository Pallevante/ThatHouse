#pragma once
#include "Item.h"
#include "Inventory.h"

class Note : public Item
{
public:
	enum Language
	{
		SPANISH,
		GERMAN,
		SWEDISH
	};
	Note();
	Note(Language	lang, std::string pickMessage, std::string name, std::string content, ItemType type = NOTE);
	std::string		read();

	Language	getLang();

	// Converts an item to a note
	// This is used in translate and read in UserInput class
	// Have to make sure it's a note to begin with.
	// Otherwise something will break
	Note*		returnNote(Item* item);

protected:
	std::string mContent;
	std::string mName;
	std::string mPickUpMessage;
	Language	mLanguage;
};
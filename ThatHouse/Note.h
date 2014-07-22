#ifndef INCLUDED_NOTE
#define INCLUDED_NOTE

#include "Item.h"
#include "Inventory.h"
#include <string>

class Note : public Item
{
public:
	enum Language
	{
		SPANISH,
		GERMAN,
		SWEDISH
	};

	Note(Language lang, std::string pickMessage, std::string name, std::string content, ItemType type = NOTE);

	std::string	read();
	std::string translate();

	Language	getLang();

	// Converts an item to a note
	// This is used in translate and read in UserInput class
	// Have to make sure it's a note to begin with.
	// Otherwise something will break
	Note*		returnNote(Item* item);

private:
	Note();
	std::string mContent;
	std::string mName;
	std::string mPickUpMessage;
	Language	mLanguage;
};

#endif
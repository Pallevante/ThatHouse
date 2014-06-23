#pragma once
#include "Item.h"
#include "Inventory.h"

class Note : public Item
{
public:
	enum Language
	{
		FRENCH,
		GERMAN,
		SWEDISH
	};
	Note(Language lang, std::string pickMessage, std::string name, std::string content, ItemType type = NOTE);
	std::string read();
protected:
	std::string mContent;
	std::string mName;
	std::string mPickUpMessage;
	Language	mLanguage;
};
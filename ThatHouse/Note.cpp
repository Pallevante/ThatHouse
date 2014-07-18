#include "Note.h"

Note::Note(Language lang, std::string pickUpMessage, std::string name, std::string content, ItemType type) :
mLanguage(lang),
mContent(content),
Item(type, name, pickUpMessage, true)
{
	Inventory::inventoryVector.push_back(this);
}

Note* Note::returnNote(Item* item)
{
	return (Note*)item;
}

std::string Note::read()
{
	return mContent;
}

Note::Language Note::getLang()
{
	return mLanguage;
}
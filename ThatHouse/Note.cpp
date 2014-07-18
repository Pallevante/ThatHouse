#include "Note.h"


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
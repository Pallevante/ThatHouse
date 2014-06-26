#include "Chapters.h"

int Chapters::currentPart = 0;
int Chapters::currentChapter = 0;
Chapters::CurrentChapter Chapters::mChapter = Chapters::FIRST;
Chapters::CurrentPart Chapters::mPart = Chapters::FIRST_PART;


Chapters::Chapters(){}
Chapters::~Chapters(){}

void Chapters::progressChapter()
{
	// This should work.
	mChapter = static_cast<CurrentChapter>(currentChapter);
	Chapters::currentChapter++;
	Chapters::currentPart = 0;
}

void Chapters::progressPart()
{
	++Chapters::currentPart;
	mPart = static_cast<CurrentPart>(currentPart);	
}

Chapters::CurrentChapter Chapters::getChapter()
{
	return mChapter;
}

Chapters::CurrentPart Chapters::getPart()
{
	return mPart;
}

std::string Chapters::printChapter()
{
	switch (mChapter)
	{
	case Chapters::FIRST:		return "First ";
		break;
	case Chapters::SECOND:		return "Second ";
		break;
	case Chapters::THIRD:		return "Third ";
		break;
	default:					return "I have no idea.. game broke ";
		break;
	}
}

std::string Chapters::printPart()
{
	switch (mPart)
	{
	case Chapters::FIRST_PART:	return "First part ";
		break;
	case Chapters::SECOND_PART: return "Second part ";
		break;
	case Chapters::THIRD_PART:	return "Third part ";
		break;
	case Chapters::FOURTH_PART: return "Fourth part ";
		break;
	default:					return "I have no idea.. game broke ";
		break;
	}
}
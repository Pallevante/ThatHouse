#include "Chapters.h"

int Chapters::currentPart = 0;
int Chapters::currentChapter = 0;

Chapters::Chapters(){}
Chapters::~Chapters(){}

void Chapters::progressChapter()
{
	mChapter = static_cast<CurrentChapter>(currentChapter);
	Chapters::currentChapter++;
	Chapters::currentPart = 0;
}

void Chapters::progressPart()
{
	mPart = static_cast<CurrentPart>(currentPart);
	Chapters::currentPart++;
}

Chapters::CurrentChapter Chapters::getChapter()
{
	return mChapter;
}

Chapters::CurrentPart Chapters::getPart()
{
	return mPart;
}
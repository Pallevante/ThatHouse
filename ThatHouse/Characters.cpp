#include "Characters.h"

Characters::CharacterVector Characters::characterVector;

Characters::Characters(){}

Characters::Characters(Characters::CharacterName name) : 
	mName(name),
	mLike(0)
{}

Characters::~Characters(){}

int Characters::getCharacterLike()
{
	return mLike;
}

Characters::CharacterName Characters::getName()
{
	return mName;
}
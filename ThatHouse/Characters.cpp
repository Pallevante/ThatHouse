#include "Characters.h"

Characters::CharacterVector Characters::characterVector;

Characters::Characters(){}

Characters::Characters(Characters::CharacterName name) : 
	mName(name),
	mLike(0),
	mCharacterIsFound(false)
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

void Characters::setLike(CharacterName name, int addToLike)
{
	for (auto _char : characterVector)
	{
		if (name == _char->getName())
			_char->mLike += addToLike;
	}
}

bool Characters::charachterFound(CharacterName name)
{
	for (auto& i : characterVector)
	{
		if (i->getName() == name)
		{
			return i->mCharacterIsFound;
		}
	}
	return false;
}
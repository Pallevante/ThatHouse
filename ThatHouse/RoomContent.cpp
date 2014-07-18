#include "RoomContent.h"

RoomContent::RoomContent(ContentType type)
{
	switch (type)
	{
	case BED:
		mName		= "a bed";
		mIsChecked	= false;
		mType		= type;
		break;
	case BOOKSHELF:
		mName		= "a bookshelf";
		mIsChecked	= false;
		mType		= type;
	}
}

std::string RoomContent::check()
{
	mIsChecked = true;
	if (mType != TOILET)
		return Inventory::getRandomItem();
	else
		return "Yep! It's a toilet!";
}


std::string RoomContent::getName()
{
	return mName;
}

Bed::Bed() :
	RoomContent(BED)
{
}

Bookshelf::Bookshelf() : 
	RoomContent(BOOKSHELF)
{
}


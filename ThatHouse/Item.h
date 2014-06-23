#pragma once
#include <string>

class Item
{
public:
	static enum ItemType
	{
		WEAPON,
		NOTE,
		GARBAGE
	};

	Item();
	~Item();
	Item(ItemType type, std::string name, std::string pickUpString, bool remFound);

	// Some basic functionalities of every item subclass.
	std::string getName();
	std::string getPickUpString();
	bool		removeOnceFound();
	ItemType	getType();

protected:
	ItemType	mType;
	bool		mRemoveOnceFound;
	std::string mName;
	std::string mPickUp;

};
#pragma once
#include <string>

class Item{
public:
	static enum ItemType{
		WEAPON,
		NOTE,
		BULLETS,
		GARBAGE
	};

	Item();
	~Item();
	Item(ItemType type, std::string name, int damage, std::string pickUpString, bool remFound);

	// Some basic functionalities of every item subclass.
	int			getDamage();
	std::string getName();
	std::string getPickUpString();
	bool		removeOnceFound();
	ItemType	getType();
private:
	ItemType	mType;
	int			mDamage;
	bool		mRemoveOnceFound;
	std::string mName;
	std::string mPickUp;

};
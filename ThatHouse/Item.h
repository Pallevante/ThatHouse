#pragma once
#include <string>

class Item{
public:
	static enum ItemType{
		WEAPON,
		NOTE,
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
	ItemType	_type;
	int			_damage;
	bool		_removeOnceFound;
	std::string _name;
	std::string _pickUp;

};
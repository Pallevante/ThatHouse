#pragma once
#include <string>

class Item{
public:
	Item();
	~Item();
	// Some basic functionalities of every item subclass.
	virtual int			getDamage()			= 0;
	virtual std::string getName()			= 0;
	virtual std::string getPickUpString()	= 0;
	virtual bool		removeOnceFound()	= 0;

	// used to determine what type of item things is.
	static enum ItemType{
		WEAPON,
		NOTE,
		GARBAGE
	};
};
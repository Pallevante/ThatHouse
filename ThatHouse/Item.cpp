#include "Item.h"

Item::Item(){}

Item::~Item(){}

Item::Item(ItemType type, std::string name, std::string pickupMessage, bool remFound) : 
mType(type),
mName(name),
mPickUp(pickupMessage),
mRemoveOnceFound(remFound)
{}

Item::ItemType Item::getType()
{
	return mType;
}
bool Item::removeOnceFound()
{
	return mRemoveOnceFound;
}
std::string Item::getPickUpString()
{
	return mPickUp;
}
std::string Item::getName()
{
	return mName;
}
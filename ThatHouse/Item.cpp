#include "Item.h"

Item::Item(){}

Item::~Item(){}

Item::Item(ItemType type, std::string name, int damage, std::string pickupMessage, bool remFound) : 
mType(type),
mName(name),
mDamage(damage),
mPickUp(pickupMessage),
mRemoveOnceFound(remFound)
{

}

Item::ItemType Item::getType()
{
	return mType;
}
bool Item::removeOnceFound()
{
	return mRemoveOnceFound;
}

int Item::getDamage()
{
	return mDamage;
}

std::string Item::getPickUpString()
{
	return mPickUp;
}

std::string Item::getName()
{
	return mName;
}
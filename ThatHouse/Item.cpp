#include "Item.h"

Item::Item(){}

Item::~Item(){}

Item::Item(ItemType type, std::string name, int damage, std::string pickupMessage, bool remFound) : 
_type(type),
_name(name),
_damage(damage),
_pickUp(pickupMessage),
_removeOnceFound(remFound)
{

}

Item::ItemType Item::getType()
{
	return _type;
}
bool Item::removeOnceFound()
{
	return _removeOnceFound;
}

int Item::getDamage()
{
	return _damage;
}

std::string Item::getPickUpString()
{
	return _pickUp;
}

std::string Item::getName()
{
	return _name;
}
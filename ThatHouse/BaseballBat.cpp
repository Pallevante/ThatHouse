#include "BaseballBat.h"

// Still counts as inheritance!
BaseballBat::BaseballBat(ItemType type, std::string name, int damage, std::string pickMessage, bool remFound) :
	Item(WEAPON, "BaseballBat", 2, "You picked up a baseballbat!", true)
{
	Inventory::inventoryVector.push_back(this);
}
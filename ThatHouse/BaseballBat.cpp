#include "BaseballBat.h"

BaseballBat::BaseballBat() :
	Item(WEAPON, "BaseballBat", "You picked up a baseballbat!", true)
{
	Inventory::inventoryVector.push_back(this);
}
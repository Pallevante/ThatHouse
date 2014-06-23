#include "BaseballBat.h"

// Still counts as inheritance!
BaseballBat::BaseballBat() :
	Item(WEAPON, "BaseballBat", 2, "You picked up a baseballbat!", true)
{
	Inventory::inventoryVector.push_back(this);
}
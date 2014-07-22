#ifndef INCLUDED_INVENTORY
#define INCLUDED_INVENTORY

#include <vector>
#include <algorithm>
#include "Item.h"
#include "BaseballBat.h"
#include "Garbage.h"

class Inventory
{
public:
	static bool init();
	// The vector the player will use.
	typedef std::vector<Item*> InventoryVector;
	static Inventory::InventoryVector inventoryVector;

	// The vector the inventory will use for random items.
	typedef std::vector<Item*> ItemsToFindVector;
	static Inventory::ItemsToFindVector itemsToFindVector;

	// Gives the user a random Item.
	static std::string getRandomItem();

	// Prints the inventory.
	static std::string check();

	// Drops the item.
	static std::string drop();

	// Checks inventory for sepcific item type
	// Often used for a action with a requirement
	static bool checkFor(Item::ItemType type);

private:
	static bool populateWithDefaultItems();
};

#endif
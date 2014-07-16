#pragma once
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
	static void check();
	// Drops the item.
	static void drop();

private:
	static bool populateWithDefaultItems();
};
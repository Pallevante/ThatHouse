#pragma once
#include <vector>
#include "Item.h"
class Inventory{
public:
	//The vector the player will use.
	static std::vector<Item> inventoryVector;

	//The vector the inventory will use for random items.
	static std::vector<Item> itemsToFindVector;

	static void getRandomItem();
	static void check();
	static void drop();
};
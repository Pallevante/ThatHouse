#include "Inventory.h"

Inventory::InventoryVector Inventory::inventoryVector;
Inventory::ItemsToFindVector Inventory::itemsToFindVector;

void Inventory::getRandomItem()
{	
	// Makes a random sort of the itemsToFindVector and places the first item
	// into the inventoryVector.
	std::random_shuffle(itemsToFindVector.begin(), itemsToFindVector.end());
	inventoryVector.push_back(itemsToFindVector[0]);

	// Tells the user what he/she got.
	itemsToFindVector[0]->getPickUpString();

	// Removes the first item if it's supposed to only be found once. #obfo
	if (itemsToFindVector[0]->removeOnceFound())
		itemsToFindVector.pop_back();
}
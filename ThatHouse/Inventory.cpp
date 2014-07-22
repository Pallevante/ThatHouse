#include "Inventory.h"

Inventory::InventoryVector Inventory::inventoryVector;
Inventory::ItemsToFindVector Inventory::itemsToFindVector;

bool Inventory::init()
{
	if (populateWithDefaultItems())
		return true;
	else return false;
	// That made my belly tingle.
}

bool Inventory::populateWithDefaultItems()
{
	// Just because some items might fuck up.
	try
	{
		itemsToFindVector.push_back(new BaseballBat());
		itemsToFindVector.push_back(new Garbage());
		return true;
	}
	catch (std::exception error)
	{
		// Error handling.
		printf("Error initiating the itemsToFindVector\n");
		printf("Err code: ");
		printf(error.what());
		return false;
	}
}

std::string Inventory::check()
{
	std::string message = "Inventory contains:\n";
	for (auto i : inventoryVector)
	{
		message += i->getName() + "\n";
	}	
	return message;
}

bool Inventory::checkFor(Item::ItemType type)
{
	for (auto i : inventoryVector)
	{
		if (i->getType() == type)
			return true;
	}
	return false;
}

std::string Inventory::getRandomItem()
{	
	// Makes a random sort of the itemsToFindVector and places the first item
	// into the inventoryVector.
	std::random_shuffle(itemsToFindVector.begin(), itemsToFindVector.end());
	
	// Because we don't want to clutter the user inventory
	// with garbage items.
	if (itemsToFindVector[0]->getType() != Item::GARBAGE)
		inventoryVector.push_back(itemsToFindVector[0]);

	// So the user knows what he/she got.
	std::string message = itemsToFindVector[0]->getPickUpString();

	// Removes the first item if it's supposed to only be found once. #obfo
	if (itemsToFindVector[0]->removeOnceFound())
		itemsToFindVector.pop_back();
	
	return message;
}


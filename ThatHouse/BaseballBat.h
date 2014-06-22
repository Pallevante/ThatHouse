#include "Item.h"
#include "Inventory.h"

class BaseballBat : public Item{
public:
	BaseballBat(ItemType type, std::string name, int damage, std::string pickMessage, bool remFound);
	~BaseballBat();
};
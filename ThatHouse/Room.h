#pragma once
#include "Inventory.h"
#include <vector>


class RoomContent;
class Room
{
public:
	static enum RoomType
	{
		DEFAULT,
		BEDROOM,
		KITCHEN,
		HALLWAY
	};
	Room(RoomType type);
	
	std::string checkRoom();
	std::string check(RoomContent* contentToCheck);
	~Room();
	
private:
	std::vector<RoomContent*> roomVector;
	void initBedroom();
	void initHallway();
	void initKitchen();
	void initDefault();
};
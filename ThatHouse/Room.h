#pragma once
#include "Inventory.h"
#include <vector>
#include "RoomContent.h"

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
	
	void checkRoom();
	void check(RoomContent contentToCheck);
	~Room();
	
private:
	std::vector<RoomContent*> roomVector;
	void initBedroom();
	void initHallway();
	void initKitchen();
	void initDefault();
};
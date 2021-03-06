#ifndef INCLUDED_ROOM
#define INCLUDED_ROOM

#include "Inventory.h"
#include <vector>


class RoomContent;
class Room
{
public:
	enum RoomType
	{
		DEFAULT,
		BEDROOM,
		KITCHEN,
		HALLWAY
	};
	Room(RoomType type);
	
	std::string checkRoom();
	std::string check(RoomContent* contentToCheck);
	RoomType getRoomType();
	~Room();
	
private:
	std::vector<RoomContent*> roomVector;
	void initBedroom();
	void initHallway();
	void initKitchen();
	void initDefault();
};

#endif
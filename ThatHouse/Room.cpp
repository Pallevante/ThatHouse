#include "Room.h"
#include "RoomContent.h"

Room::Room(RoomType type)
{
	switch (type)
	{
	case DEFAULT:
		initDefault();
		break;
	case BEDROOM:
		initBedroom();
		break;
	}
}

void Room::initBedroom()
{
	roomVector.push_back(new Bookshelf());
	roomVector.push_back(new Bed());
}

void Room::initHallway()
{
	roomVector.push_back(new Bookshelf());
}

void Room::initDefault()
{

}

std::string Room::checkRoom()
{
	std::string returnContent = "Room contains:\n";
	for (auto i : roomVector)
	{
		returnContent += "a " + i->getName() + "\n";
	}
	return returnContent;
}
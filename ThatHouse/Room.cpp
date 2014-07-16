#include "Room.h"

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
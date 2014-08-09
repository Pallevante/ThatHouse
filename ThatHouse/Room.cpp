#include "Room.h"
#include "RoomContent.h"
#include "Chapters.h"
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

Room::RoomType Room::getRoomType()
{
	switch (Chapters::getChapter())
	{
	case Chapters::FIRST:
		switch (Chapters::getPart())
		{
		case Chapters::FIRST_PART:
			return Room::BEDROOM;

		case Chapters::SECOND_PART:
			return Room::BEDROOM;

		case Chapters::THIRD_PART:
			return Room::HALLWAY;
		}
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
	roomVector.push_back(new Oven());
}

std::string Room::checkRoom()
{
	std::string returnContent = "Room contains:\n";
	for (auto i : roomVector)
	{
		returnContent += i->getName() + "\n";
	}
	return returnContent;
}

std::string check(RoomContent* contentToCheck)
{
	return contentToCheck->check();
}

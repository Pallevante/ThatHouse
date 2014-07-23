#ifndef INCLUDED_STORY
#define INCLUDED_STORY

#include <string>
#include "Chapters.h"

class Room;

class Story
{
public:
	static std::string getStory();
	static Room::RoomType getRoomType();
};

#endif
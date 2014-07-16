#pragma once
#include <string>
#include "Room.h"

class RoomContent
{
public:
	static enum ContentType
	{
		BED,
		TOILET,
		BOOKSHELF,
		OVEN,
	};

	RoomContent(ContentType type);
	~RoomContent();
	std::string check();
	std::string getName();

protected:
	ContentType mType;
	bool		mIsChecked;
	std::string mName;
};


class Bed : public RoomContent
{
public:
	Bed();
};

class Toilet : public RoomContent
{
public:
	Toilet();
};

class Bookshelf : public RoomContent
{
public:
	Bookshelf();
};

class Oven : public RoomContent
{
public:
	Oven();
};
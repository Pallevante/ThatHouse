#include "Story.h"
#include "Player.h"
#include "Room.h"

Room::RoomType Story::getRoomType()
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

std::string Story::getStory()
{
	switch(Chapters::getChapter())
	{
	case Chapters::FIRST:
		switch (Chapters::getPart())
		{
		case Chapters::FIRST_PART:
			return "You find yourself... alone... in a strange room... \nYou try to move but you're handcuffed to a pipe in the wall.";
		
		case Chapters::SECOND_PART:
			Player::isInDanger = true;
			return "You get out of the bed and hear footsteps outside the door...";

		}
	}	
}
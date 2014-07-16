#include "Story.h"

std::string Story::getStory()
{
	if (Chapters::getChapter() == Chapters::FIRST)
	{
		if (Chapters::getPart() == Chapters::FIRST_PART)
		{
			return "You find yourself... alone... in a strange room... \nYou try to move but you're handcuffed to a pipe in the wall.";
		}
	}	
}
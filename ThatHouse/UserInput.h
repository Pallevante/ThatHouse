#pragma once
#include <string>
#include "Chapters.h"


class UserInput
{
public:
	static void			userInput();

private:
	static std::string  getResponse(std::string input);
	UserInput();
	~UserInput();
};
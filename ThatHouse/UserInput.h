#pragma once
#include <string>
#include "Chapters.h"

class Note;
class UserInput
{
public:
	static void			userInput();

private:
	static std::string  getResponse(std::string input);

	// This will be triggered by writing translate. 
	static std::string	translate(std::string input);
	static std::string  read(std::string input);
	/// Used to convert all characters to lowercase.
	/// This simplifies the usage of if's to compute the input
	static void			allToLower(std::string& input);

	// Used to find phrases in the input.
	// ARGUMENTS: String to search, String what to look for.
	static bool			contains(std::string& input, std::string phrase);

	UserInput();
	~UserInput();

	static Note* mNote;
};
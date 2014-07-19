#ifndef INCLUDED_DIALOG
#define INCLUDED_DIALOG

#include "ThreadWriting.h"
#include <string>

class Dialog
{
public:
	static std::string getResponse(std::string input);
};

#endif
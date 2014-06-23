/*
* Used to achive a typewriting effect in the console/terminal
* on DOS & UNIX based systems. Made by Peter H�kansson 2014
*
*/

#include "ThreadWriting.h"

void ThreadWriting::clear()
{
	#ifdef _WIN32
		system("cls");
	#else
		//We assume it's *NIX or OSX
		system("clear");
	#endif
}

void ThreadWriting::write(string input)
{
	// Uses "our" clear method.
	clear();
	for (auto i : input)
	{
		cout << i << flush;
		//Waits for 15 milliseconds
		this_thread::sleep_for(chrono::milliseconds(15));
	}
}
/*
* Used to achive a typewriting effect in the console/terminal
* on DOS & UNIX based systems. Made by Peter Håkansson 2014
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

void ThreadWriting::wait()
{
	cin.clear();
	cin.get();
	cin.get();
}


void ThreadWriting::write(string input)
{
	// Uses "our" clear method.
	clear();
	for (auto i : input)
	{
		cout << i << flush;
		// Waits for 20 milliseconds to give the typewriting effect.
		this_thread::sleep_for(chrono::milliseconds(20));
	}
}
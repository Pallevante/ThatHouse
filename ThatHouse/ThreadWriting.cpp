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
}


void ThreadWriting::write(string input)
{
	// Uses "our" clear method.
	clear();
	for (auto i : input)
	{
		cout << i << flush;
		// Waits for the ammount of time settings displays.
		this_thread::sleep_for(chrono::milliseconds(20));
	}
	cout << endl;
}
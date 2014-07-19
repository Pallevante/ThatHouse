/* 
 * Used to achive a typewriting effect in the console/terminal  
 * on DOS & UNIX based systems. Made by Peter Håkansson 2014
 *
 */

#ifndef INCLUDED_THREADWRITING
#define INCLUDED_THREADWRITING

#include <string>
#include <iostream>
#include <thread>
#include <chrono>
#include <istream>
#include <cstdlib>

using namespace std;
class ThreadWriting
{
public:
	// Writes the parameter to the console window with a delay of 25 ms between characters
	void write(string input);
	void wait();
private:
	void clear();
};

#endif
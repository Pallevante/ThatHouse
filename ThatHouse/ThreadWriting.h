/* 
 * Used to achive a typewriting effect in the console/terminal  
 * on DOS & UNIX based systems. Made by Peter Håkansson 2014
 *
 */

#pragma once

#include <string>
#include <iostream>
#include <thread>
#include <chrono>
#include <istream>
#include <cstdlib>

using namespace std;
class ThreadWriting{
public:
	static void clear();
	static void write(string input);
};

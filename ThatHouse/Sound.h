#ifndef INCLUDED_SOUND
#define INCLUDED_SOUND

#include <SFML\Audio.hpp>
#include <string>

class Sound
{
public:
	Sound(std::string filePath);
	void playSound();
	void changeTrack();
private:
	std::string mFilePath;

};

#endif 

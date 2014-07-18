#pragma once
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
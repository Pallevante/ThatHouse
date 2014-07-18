#include "Sound.h"

sf::Music* mMusic = new sf::Music;

Sound::Sound(std::string filePath)
{	
	mMusic->openFromFile(filePath);
	mFilePath = filePath;
}

void Sound::playSound()
{
	mMusic->play();
}

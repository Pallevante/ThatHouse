#pragma once

class Characters 
{
public:
	enum CharacterName
	{
		JUULI,
		STEPHEN,
		CATHRIN
	};

	Characters();
	Characters(CharacterName name);
	~Characters();
	int getCharacterLike(CharacterName name);
private:
	CharacterName	mName;
	int				mLike;
};
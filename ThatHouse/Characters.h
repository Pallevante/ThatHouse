#pragma once
#include <vector>

class Characters 
{
public:
	enum CharacterName
	{
		JUULI,
		STEPHEN,
		CATHRIN
	};
	typedef std::vector<Characters*> CharacterVector;
	static Characters::CharacterVector characterVector;

	Characters();
	Characters(CharacterName name);
	~Characters();
	int getCharacterLike();
	std::string characterResponse();
	void setLike(CharacterName name, int addToLike);
	CharacterName getName();
protected:
	CharacterName	mName;
	int				mLike;
};
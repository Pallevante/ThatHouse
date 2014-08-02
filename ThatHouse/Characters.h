#ifndef INCLUDED_CHARACTERS
#define INCLUDED_CHARACTERS
#include <vector>
#include <string>

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
	static bool charachterFound(CharacterName name);


	Characters();
	Characters(CharacterName name);
	~Characters();
	int getCharacterLike();
	virtual std::string characterResponse() = 0;
	void setLike(CharacterName name, int addToLike);
	CharacterName getName();

protected:
	bool			mCharacterIsFound;
	CharacterName	mName;
	int				mLike;
};

#endif 
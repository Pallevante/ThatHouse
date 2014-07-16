#include "GameAI.h"

bool GameAI::judge(JudgeType judgeType)
{
	// Fetch the like from characters.

	switch (judgeType)
	{
	case KILL_JUULI:
		mJuuliLike = getLike(Characters::JUULI);
		return killJuuli();
		
	case KILL_CATHRIN:
		mCathrinLike = getLike(Characters::CATHRIN);
		return killCathrin();

	case KILL_STEPHEN:
		mStephenLike = getLike(Characters::STEPHEN);
		return killStephen();

	case DEFAULT:		
		return defaultAICheckUp();
	}	
}

// Will become more complex.
bool GameAI::aiHatesYou()
{
	if (auto i = rand() % 10 > 8)
	{
		return true;
	}
	else return false;
}

// Most trust giving person
bool GameAI::killJuuli()
{
	if (!aiHatesYou())
	{
		if (mJuuliLike > 2)
			return true;
	}
	else return false;
}

// A bit trickier
bool GameAI::killCathrin()
{
	if (!aiHatesYou())
	{
		if (mCathrinLike > 5)
			return true;
	}

	else return false;
}

// What a tool.
bool GameAI::killStephen()
{
	if (!aiHatesYou())
	{
		if (mStephenLike > 10)
			return true;
	}
	else return false;
}


int GameAI::getCurrentKarma()
{
	return Game::mKarma;
}

int GameAI::getCurrentHealth()
{
	return Game::mHealth;
}

int GameAI::getLike(Characters::CharacterName name)
{
	for (auto _char : Characters::characterVector)
	{
		if (name == _char->getName())
		{
			return _char->getCharacterLike();
		}
		else
			return 0;
	}
}




#include "GameAI.h"

int GameAI::mCathrinLike;
int GameAI::mJuuliLike;
int GameAI::mStephenLike;
GameAI::CurrentAIState GameAI::mCurrentAIState;

void GameAI::init()
{
	mCurrentAIState = NEUTRAL;
}

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

// Should be more complex... 
bool GameAI::defaultAICheckUp()
{
	if(getCurrentKarma() * Player::ammountOfCurses )
	{
		if(!aiHatesYou())
		{
			return true;
		}
		return false;
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


// Used as a base for the AI to make decisions from
int GameAI::getCurrentKarma()
{
	return Game::mKarma;
}

// The AI might give different decisions based on this aswell.
// Good karma - low health: Kinder advice
// Bad karma - low health: Ha! 
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
	}
	return 0;
}




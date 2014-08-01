#ifndef INCLUDED_GAMEAI
#define INCLUDED_GAMEAI

#include "Game.h"
#include "Characters.h"
#include "Chapters.h"
#include "Story.h"
#include <cstdlib>
#include "Player.h"

class GameAI
{
public:
	enum JudgeType
	{
		DEFAULT,
		KILL_JUULI,
		KILL_STEPHEN,
		KILL_CATHRIN
	};

	static bool judge(JudgeType judgeType);
	static void init();
private:
	// The different AI States. 
	enum CurrentAIState
	{
		HAPPY,
		NEUTRAL,
		MAD,
		UWOTM8
	};

	static bool killJuuli();
	static bool killCathrin();
	static bool killStephen();

	static bool aiHatesYou();
	static bool defaultAICheckUp();

	static int getCurrentKarma();
	static int getCurrentHealth();
	static int getLike(Characters::CharacterName name);

	// Regular variables.
	static int mJuuliLike;
	static int mStephenLike;
	static int mCathrinLike;

	static CurrentAIState mCurrentAIState;
};

#endif
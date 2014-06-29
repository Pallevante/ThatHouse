#pragma once
#include "Game.h"
#include "Characters.h"
#include "Chapters.h"
#include "Stephen.h"
// Include charactes to itterate the "like" towards the player.

class GameAI
{
public:
	static void judge();

private:
	static int	getCurrentKarma();
	static int	getLike(Characters::CharacterName name);
	int mJuuliLike;
	int mStephenLike;
	int mCathrinLike;
};
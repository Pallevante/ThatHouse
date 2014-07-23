#ifndef INCLUDED_PLAYER
#define INCLUDED_PLAYER

class Player
{
public:
	static bool isTiedToBed;
	static bool isInDanger;
	static int	ammountOfCurses;
private:
	Player();
	~Player();
};

#endif
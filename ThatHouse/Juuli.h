#ifndef INCLUDED_JUULI
#define INCLUDED_JUULI

#include "Characters.h"

class Juuli : public Characters
{
public:
	Juuli();
	~Juuli();
	virtual std::string characterResponse();
};

#endif
#include "Juuli.h"

Juuli::Juuli():
	Characters(JUULI)
{
	Characters::characterVector.push_back(this);
}

std::string Juuli::characterResponse()
{
	return "lul wut?";
}
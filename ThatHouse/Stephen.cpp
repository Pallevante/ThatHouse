#include "Stephen.h"

Stephen::Stephen() :
	Characters(STEPHEN)
{
	characterVector.push_back(this);
}

Stephen::~Stephen()
{
	delete this;
}

std::string Stephen::characterResponse()
{
	return "Huh....";
}
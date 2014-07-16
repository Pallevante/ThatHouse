#include "Juuli.h"

Juuli::Juuli():
	Characters(JUULI)
{
	Characters::characterVector.push_back(this);
}
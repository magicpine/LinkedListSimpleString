#include "SimpleString.h"

SimpleString::~SimpleString()
{
	if (characters != nullptr)
		delete []characters;
}

bool SimpleString::isEqual(const SimpleString &d)
{
	if (d.numofCharacters == numofCharacters)
	{
		for (int i = 0; i < d.numofCharacters; i++)
		{
			if (d.characters[i] != characters[i])
				return false;
		}
		return true;
	}
	return false;
}
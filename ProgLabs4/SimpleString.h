#pragma once

class SimpleString
{
public:
	int numofCharacters;
	char *characters;
	//create memory for characters and copy the str array 
	SimpleString(int t_numofCharacters, char str[]) : numofCharacters(t_numofCharacters)
	{
		characters = new char[numofCharacters + 1];
		for (int i = 0; i < numofCharacters; i++)
		{
			characters[i] = str[i];
		}
		characters[numofCharacters] = '\0';
	}
	SimpleString()
	{
		numofCharacters = 0;
		characters = nullptr;
	}
	~SimpleString();
	bool isEqual(const SimpleString &d);
};

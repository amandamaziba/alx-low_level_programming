#include "main.h"

/**
* _islower - checks lower case character
*@c: character to be checked
*Return: 1 if charecter is lower case or  0 if charecter is upper case
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

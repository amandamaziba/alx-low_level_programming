#include "main.h"

/**
* _isalpha - checks lower case charecter
*@c: charecter to be checked
*Return: 1 if charecter is an alphabet or 0 if charecter is not an alphabet
*/
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

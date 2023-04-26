#include "main.h"

/**
* _islower - checks if it's lower case
*
*Return: 1 if charecter lower case and 0 if charecter upper case false
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

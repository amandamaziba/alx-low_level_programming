#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _isupper - checks upper case charecter
*@c: charecter to be checked
*Return: 1 if charecter upper case or 0 if charecter lower case
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

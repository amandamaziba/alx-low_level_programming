#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _isdigit - checks for a digit (0 through 9)
*@c: charecter to be checked
*Return: 1 if charecter is a digit or 0 if charecter is not a digit
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* _isalpha - checks if charecter is alphabet
*@c: charecter to be checked
*Return: 1 if charecter is an alphabet or 0 if charecter is not an alphabet
*/
int _isalpha(int c)
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

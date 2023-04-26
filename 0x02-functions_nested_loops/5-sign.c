#include "main.h"

/**
*print_sign- determine the sign of a number
*@n: number to be checked
*Return: 1 if number is positive, or -1 if number is negatie or 0 if not
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

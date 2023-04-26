#include "main.h"

/**
*print_last_digit - print the last digit of a number
*@i: number to be checked
*Return: last digit
*/

int print_last_digit(int n)
{
	int ln = n % 10;

	if (ln < 0)
	{
		_putchar(-ln + 48);
		return (-ln);
	}
	else
	{
		_putchar(ln + 48);
		return (ln);
	}
}

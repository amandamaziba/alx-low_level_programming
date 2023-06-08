#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to be checked
 */
void print_binary(unsigned long int n)
{
	unsigned long int b;
	int i, a = 0;

	for (i = 63; i >= 0; i--)
	{
		b = n >> i;

		if (b & 1)
		{
			_putchar('1');
			a++;
		}
		else if (a)
			_putchar('0');
	}
	if (!a)
		_putchar('0');
}

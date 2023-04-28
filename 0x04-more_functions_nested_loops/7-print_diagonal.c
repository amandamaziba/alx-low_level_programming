#include "main.h"

/**
* print_diagonal - draws a straight line in the terminal
*@n: is the number of times the character \ should be printed
*Return: nothing
*/
void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x < n; x++)
			{
				if (x == i)
				{
					_putchar(92);
				}
				else if (x < i)
				{
					_putchar(32);
				}
			}
			_putchar('\n');
		}
	}
}

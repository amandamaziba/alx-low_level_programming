#include "main.h"

/**
*times_table - print the 9 times table, starting with 0
*
*Return: 0
*/
void times_table(void)
{
	int i, x, a, b, c;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			a = i * x;
			if (a > 9)
			{
				b = a % 10;
				c = (a - b) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(c + '0');
				_putchar(b + '0');
			}
			else
			{
				if (x != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(a + '0');
			}
		}
		_putchar('\n');
	}
}


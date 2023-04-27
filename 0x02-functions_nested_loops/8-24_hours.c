#include "main.h"

/**
*jack_bauer - print minutes ofthe day
*
*Return: 0
*/
void jack_bauer(void)
{
	int z, w, x, y;

	for (z = 0; z <= 2; z++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (x = 0; x <= 5; x++)
			{
				for (w = 0; w <= 9; w++)
				{
					if (z >= 2 && y >= 4)
					{
						break;
					}
					_putchar(z + 48);
					_putchar(y + 48);
					_putchar(58);
					_putchar(x + 48);
					_putchar(w + 48);
					_putchar('\n');
				}
			}
		}
	}
}



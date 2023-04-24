#include <stdio.h>

/**
*main - prints all possible different combinations of three digits
*
*Return: Always 0.
*/
int main(void)
{
	int i;
	int x;
	int a;

	for (i = 48; i <= 57; i++)
	{
		for (x = 49; x <= 57; x++)
		{
			for (a = 50; a <= 57; a++)
			{
				if (a > x && x > i)
				{
					putchar(i);
					putchar(x);
					putchar(a);
					if (i != 55 || x != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}



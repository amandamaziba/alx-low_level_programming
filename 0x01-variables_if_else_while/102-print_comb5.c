#include <stdio.h>

/**
*main - prints all possible combinations of two two-digit numbers.
*
*Return: Always 0.
*/
int main(void)
{
	int i;
	int x;

	 for (i = 0; i <= 99; i++)
	 {
		 for (x = 0; x < 99; x++)
		 {
			 if (i < x)
			 {
				 putchar((i / 10) + 48);
				 putchar((i % 10) + 48);
				 putchar(' ');
				 putchar((x / 10) + 48);
				 putchar((x % 10) + 48);
				 if (i != 98 || x != 99)
				 {
					 putchar(',');
					 putchar(' ');
				 }
			 }
		 }
	 }
	 putchar('\n');
	 return (0);
}


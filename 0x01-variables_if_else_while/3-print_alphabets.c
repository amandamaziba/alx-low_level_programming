#include <stdio.h>

/**
*main - print alphabet in lower case and upper case
*
*Return: Always 0.
*/
int main(void)
{
	int i = 97;
	int x = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (x <= 90)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

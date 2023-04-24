#include <stdio.h>

/**
*main - print numbers of base 16 in lowercase
*
*Return: Always 0.
*/
int main(void)
{
	int i;
	int x;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (x = 97; x <= 102; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

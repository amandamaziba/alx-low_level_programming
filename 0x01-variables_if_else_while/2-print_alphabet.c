#include <stdio.h>

/**
*main - print alphabet in lower case
*
*Return: Always 0.
*/
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

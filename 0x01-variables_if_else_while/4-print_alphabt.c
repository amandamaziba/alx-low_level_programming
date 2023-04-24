#include <stdio.h>

/**
*main - print alphabet in lower case and upper case
*
*Return: Always 0.
*/
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 'e' || i == 'q')
		{
			i++;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

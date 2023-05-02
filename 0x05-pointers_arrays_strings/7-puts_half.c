#include "main.h"

/**
 * puts_half- prints half of a string, followed by a new line
 * @str: string to be used
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i = 0;
	int a;

	while (str[i] != '\0')
	{
		i++;
	}
	a = i / 2;
	if (i % 2 == 1)
	{
		a++;
	}
	while (a < i)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}

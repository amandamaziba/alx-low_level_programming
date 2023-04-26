#include "main.h"

/**
*main -the programm will print alphabet in lower case
*
*Return: 0
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

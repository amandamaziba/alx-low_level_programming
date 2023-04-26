#include "main.h"

/**
* print_alphabet_x10 - the programm will print alphabet in lower case x 10
*
*Return: 0
*/
void print_alphabet_x10(void)
{
	int i;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (x = 97; x <= 122; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}


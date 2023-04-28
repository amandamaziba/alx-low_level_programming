#include "main.h"

/**
* print_triangle -  prints a triangle, followed by a new line.
*@size: is the size of the triangle
*Return: nothing
*/
void print_triangle(int size)
{
	int i, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (x = i; x < size; x++)
			{
				_putchar(32);
			}
			for (x = 1; x <= i; x++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

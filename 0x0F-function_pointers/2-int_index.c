#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: an array
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (x < size;)
			{
				if (cmp(array[x]))
					return (x);
				x++;
			}
		}
	}
	return (-1);
}

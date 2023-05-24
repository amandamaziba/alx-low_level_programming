#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -  executes a function given as a parameter on each element of an array.
 * @array: an array
 * @size: size of the array
 * @action:  pointer to the function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}

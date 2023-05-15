#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars
 * @c: char to fill array
 * @size: the size of the array
 * Return: an array or NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  copies a string
 * @str: string to be copied from
 * Return: string or NULL.
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	s = malloc(sizeof(char) *  (i + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)
	{
		s[x] = str[x];
	}
	return (s);
}

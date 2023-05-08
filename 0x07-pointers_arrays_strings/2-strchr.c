#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: charecter to be checked
 * Return: pointer to the memory area
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}

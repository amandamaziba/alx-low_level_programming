#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strstr -  locates a substring
 * @haystack: input
 * @needle: input
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *a = needle;

		while (*i == *a && *a != '\0')
		{
			i++;
			a++;
		}
		if (*a == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}

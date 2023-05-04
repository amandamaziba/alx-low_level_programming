#include "main.h"

/**
 * _strncat - returns the length of a string
 * @dest: string copied to
 * @src: string copied from
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int i = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = '\0';
	return (dest);
}

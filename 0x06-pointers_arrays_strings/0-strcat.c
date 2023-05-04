#include "main.h"

/**
 * char *_strcat- returns the length of a string
 * @dest: pointer to
 * @src: pointer from
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	while (dest[i] != '\0')
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = '\0';
	return (dest);
}

#include "main.h"
#include <stdio.h>

/**
 * char *_strcpy- copies the string pointed to by src icluding (\0)
 * @dest: pointer to be returned to
 * @src: string copied from
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;
	int i = 0;

	while (*(src + i) !=  '\0')
	{
		i++;
	}
	for (a = 0; a < i; a++)
	{
		dest[a] = src[a];
	}
	dest[i] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _memcpy- copies memory area
 * @dest: memory area to
 * @src: memory area from
 * @n: bytes
 * Return: pointer to the memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

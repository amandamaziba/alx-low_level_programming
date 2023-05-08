#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int a = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				a++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (a);
			}
		}
		s++;
	}
	return (a);
}

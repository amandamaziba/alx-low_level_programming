#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1 to be concatenated
 * @s2: string 2 to be concatenated
 * @n: number of bytes
 * Return: string or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, a = 0, x = 0, count = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[a])
		a++;

	if (n >= a)
		count = i + a;
	else
		count = i + n;
	str = malloc(sizeof(char) *  (count + 1));
	if (str == NULL)
		return (NULL);
	a = 0;
	while (x < count)
	{
		if (x <= i)
			str[x] = s1[x];
		if (x >= i)
		{
			str[x] = s2[a];
			a++;
		}
		x++;
	}
	str[x] = '\0';
	return (str);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1 to be concatenated
 * @s2: string 2 to be concatenated
 * Return: string or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0;
	int a = 0;
	int x = 0;
	int count = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[a])
		a++;
	count = i + a;
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

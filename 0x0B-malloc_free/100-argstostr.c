#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: input to be validated
 * @av: input to be validated
 * Return: pointer to array or NULL.
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, x, a = 0, count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
			count++;
	}
	count = count + ac;
	s = malloc(sizeof(char) *  count + 1);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
		{
			s[a] = av[i][x];
			a++;
		}
		if (s[a] == '\0')
		{
			s[a++] = '\n';
		}
	}
	return (s);
}

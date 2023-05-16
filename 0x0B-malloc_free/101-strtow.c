#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _str_len(char *str);
int count_w(char *str);

/**
 * _str_len - checks how many charecters in a string
 * @str: string checked
 * Return: string number
 */
int _str_len(char *str)
{
	int i = 0;
	int x = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		i++;
		x++;
	}
	return (x);
}

/**
 * count_w - count charecters of a string
 * @str: string to be counted
 * Return: number
 */
int count_w(char *str)
{
	int i = 0, x = 0, count = 0;

	for (; *(str + i); i++)
		x++;
	for (i = 0; i < x; i++)
	{
		if (*(str + i) != ' ')
		{
			count++;
			i = i + _str_len(str + i);
		}
	}
	return (count);
}

/**
 * strtow - splits a string into wordsg
 * @str: string to be splitted
 * Return: string number or NULL
 */
char **strtow(char *str)
{
	int i = 0, x = 0, temp, temp1, a;
	char **s;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	temp = count_w(str);

	if (temp == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (temp + 1));
	if (s == NULL)
		return (NULL);
	for (; x < temp; x++)
	{
		while (str[i] == ' ')
			i++;
		temp1 = _str_len(str + i);
		s[x] = malloc(sizeof(char) * (temp1 + 1));

		if (s[x] == NULL)
		{
			for (; x >= 0; x--)
				free(s[x]);
			free(s);
			return (NULL);
		}
		for (a = 0; a < temp1; a++)
			s[x][a] = str[i++];
		s[x][a] = '\0';
	}
	s[x] = NULL;
	return (s);
}

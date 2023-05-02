#include "main.h"
#include <stdio.h>

/**
 * _atoi- convert a string to an integer
 * @s: pointer
 * Return: conercted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int a = 1;
	int b = 0;
	unsigned int x = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			a *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			b = 1;
			x = (x * 10) + (s[i] - '0');
			i++;
		}
		if (b == 1)
		{
			break;
		}
		i++;
	}
	x *= a;
	return (x);
}



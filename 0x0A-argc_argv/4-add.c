#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	char *s;
	unsigned int sum = 0;
	unsigned int x;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			s = argv[i];
			for (x = 0; x < strlen(s); x++)
			{
				if (s[x] < 48 || s[x] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(s);
			s++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

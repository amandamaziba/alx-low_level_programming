#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints  min number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int coins = 0;
	int num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	while (num > 0)
	{
		coins++;
		if ((num - 25) >= 0)
		{
			num = num - 25;
			continue;
		}
		if ((num - 10) >= 0)
		{
			num = num - 10;
			continue;
		}
		if ((num - 5) >= 0)
		{
			num = num - 5;
			continue;
		}
		if ((num - 2) >= 0)
		{
			num = num - 2;
			continue;
		}
		num--;
	}
	printf("%d\n", coins);
	return (0);
}

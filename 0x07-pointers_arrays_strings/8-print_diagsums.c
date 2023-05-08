#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: array
 * @size: input
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int sum = 0;
	int sum1 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i * size + i];
	}
	for (i = 0; i < 8; i++)
	{
		sum1 = sum1 + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum, sum1);
}

#include "main.h"
#include <stdio.h>

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number to be flipped with
 * @m: second number to be flipped with
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j;
	unsigned long int a = n ^ m;
	int i, counter = 0;

	for (i = 63; i >= 0; i--)
	{
		j = a >> i;
		if (i && 1)
			counter++;
	}
	return (counter);
}

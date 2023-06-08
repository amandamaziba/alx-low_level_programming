#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to be searched
 * @index: bit index
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;

	return (bit);
}

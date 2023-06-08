#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int a = a;
	char *c = (char *) &a;

	return (*c);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	void *memoP;

	memoP = malloc(b);
	if (memoP == NULL)
	{
		exit(98);
	}
	return (memoP);
}

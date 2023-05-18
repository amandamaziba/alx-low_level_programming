#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: an array
 * @size: byte size
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memoP;
	int i, x = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = size * nmemb;
	memoP = malloc(x);

	if (memoP == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
		memoP[i] = 0;
	return (memoP);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memery allocated
 * @old_size: memery size of the pointer
 * @new_size: new memory size of the pointer
 * Return: pointer or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_memPtr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_memPtr = malloc(new_size);
		if (new_memPtr == NULL)
			return (NULL);
		return (new_memPtr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}

	}
	new_memPtr = malloc(new_size);
	if (new_memPtr == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		new_memPtr[i] = ((char *) ptr)[i];
	free(ptr);
	return (new_memPtr);
}

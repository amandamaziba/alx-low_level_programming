#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file.
 * @filename: pointer to the name of the file to be created.
 * @text_content: pointer to a string
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int i, a, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	i = write(a, text_content, length);

	if (a == -1 || i == -1)
		return (-1);
	close(a);
	return (1);
}

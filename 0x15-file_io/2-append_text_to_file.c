#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to the name of the file to be append
 * @text_content: string to be added
 * Return: 1 0r -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, a, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}
	a = open(filename, O_WRONLY | O_APPEND);
	i = write(a, text_content, length);

	if (a == -1 || i == -1)
		return (-1);
	close(a);
	return (1);
}

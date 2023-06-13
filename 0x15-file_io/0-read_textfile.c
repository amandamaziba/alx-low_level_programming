#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output
 * @filename: file to be checked
 * @letters: number of letters to be checked
 * Return: number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t s;
	ssize_t a;
	ssize_t i;
	char *buffer;

	a = open(filename, O_RDONLY);

	if (a != -1)
	{
		buffer = malloc(sizeof(char) * letters);
		s = read(a, buffer, letters);
		i = write(STDOUT_FILENO, buffer, s);

		free(buffer);
		close(a);
		return (i);
	}
	else
		return (0);
}

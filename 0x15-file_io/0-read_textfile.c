#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: file to read
 * @letters: number of lettes it should read and print
 * Return: number of printed letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int f_desc;
	ssize_t len;
	char *buffer = NULL;

	if (!filename)
		return (0);

	f_desc = open(filename, O_RDONLY);
	if (f_desc == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (!buffer)
	{
		close(f_desc);
		return (0);
	}

	len = read(f_desc, buffer, letters);
	if (len == -1)
	{
		free(buffer);
		close(f_desc);
		return (0);
	}
	len = write(STDOUT_FILENO, buffer, len);
	if (len == -1)
	{
		free(buffer);
		close(f_desc);
		return (0);
	}

	free(buffer);
	close(f_desc);
	return (len);
}

#include "main.h"
#include <stdio.h>
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
	ssize_t pos_b;
	char *buffer = NULL;

	if (!filename)
		return (0);

	f_desc = open(filename, O_RDONLY);

	if (f_desc == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));

	if (!buffer)
		return (0);

	if (read(f_desc, buffer, letters) < 0)
		return (0);

	for (pos_b = 0; buffer[pos_b]; pos_b++)
	{
		continue;
	}

	write(1, buffer, pos_b);


	return (pos_b);
}

#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - copies the content of a file to another file
 * @file_from: file with content to copy
 * @file_to: file to copy data to
 * Return: 0 on succes exit
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, pos_t, pos_b = 0;
	char *text_from, buffer[1024];

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], (O_RDWR | O_TRUNC), 0600)
	if (file_to == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (read(file_from, text_from, 1024) == -1)
	{
		dprintf(STDOUT_FILENO, "Es aca...Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	for (pos_t = 0; text_from[pos_t]; pos_t++)
	{
		if (pos_b >= 1024)
		{
			if (write(file_to, buffer, pos_b) == -1)
			{
				dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
			pos_b = 0;
			continue;
		}
		buffer[pos_b] = text_from[pos_t];
		pos_b++;
	}
	if (write(file_to, buffer, pos_b) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	return (0);
}

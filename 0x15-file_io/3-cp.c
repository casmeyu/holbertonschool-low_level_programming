#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: argument counter
 * @argv: list of arguments
 * Return: 0 on succes exit
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buffer[1024];
	ssize_t lbuf, lwrite;

	if (argc != 3)
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], (O_CREAT | O_RDWR | O_TRUNC), 0664);
	if (file_to == -1)
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (lbuf)
	{
		lbuf = read(file_from, buffer, 1024);
		if (lbuf == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		lwrite = write(file_to, buffer, lbuf);
		if (lwrite != lbuf)
		{
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

	}
	if (close(file_from) == -1)
		dprintf(STDOUT_FILENO, "Error: Can't close fd %s\n", argv[1]), exit(100);
	if (close(file_to) == -1)
		dprintf(STDOUT_FILENO, "Error: Can't close fd %s\n", argv[2]), exit(100);

	return (0);
}

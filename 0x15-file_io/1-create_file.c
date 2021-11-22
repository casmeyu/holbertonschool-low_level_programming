#include <stdio.h>
#include "main.h"

/**
 * create_file - creates a file with given and data and rw permissions
 * @filename: name of file to create
 * @text_content: fata for the created file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f_desc, pos_t, pos_b = 0;
	char buffer[1024];

	if (!filename)
		return (-1);

	f_desc = open(filename, (O_CREAT | O_RDWR | O_TRUNC), 0600);

	if (f_desc == -1)
		return (-1);


	for (pos_t = 0; text_content[pos_t]; pos_t++)
	{
		buffer[pos_b] = text_content[pos_t];
		pos_b++;
	}

	if (!write(f_desc, buffer, pos_b))
	{
		close(f_desc);
		return (-1);
	}

	close(f_desc);
	return (1);

}

#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to write into
 * @text_content: texto to write into the file
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_desc, len, pos_t;

	if (!filename)
		return (-1);

	f_desc = open(filename, O_RDWR | O_APPEND, 0600);

	if (f_desc == -1)
		return (-1);

	if (!text_content)
	{
		close(f_desc);
		return (1);
	}

	for (pos_t = 0; text_content[pos_t]; pos_t++)
		continue;

	len = write(f_desc, text_content, pos_t);

	if (len == -1)
		return (-1);

	close(f_desc);

	return (1);
}

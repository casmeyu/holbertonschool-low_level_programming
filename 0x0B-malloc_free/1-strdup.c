#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: string to copy
 *
 * Return: *ptr to the duplicate string or NULL if it failed
 */
char *_strdup(char *str)
{
	unsigned int pos, len;
	char *dup;

	if (!str)
		return (NULL);

	for (len = 0; str[len] != 0;)
		len++;

	dup = (char *)malloc((sizeof(char) * len));

	if (dup == NULL)
		return (NULL);

	for (pos = 0; pos <= len; pos++)
	{
		dup[pos] = str[pos];
	}

	return (dup);
}

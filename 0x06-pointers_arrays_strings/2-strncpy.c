#include "main.h"
/**
 * strncpy - copies the src string into the dest string
 * up to n size.
 *
 * @dest: destination string
 * @src: the source string
 * @n: max numbers of string to be copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int pos_dest;

	for (pos_dest = 0; pos_dest < n && src[pos_dest] != 0; pos_dest++)
		dest[pos_dest] = src[pos_dest];

	for (; pos_dest < n; pos_dest++)
		dest[pos_dest] = 0;

	return (dest);
}

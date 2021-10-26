#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates a dynamically sized array
 * of chars using malloc
 *
 * @size: size of the array
 * @c: character to fill memory with
 *
 * Returns: A *ptr to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int pos;
	char *arr;

	if (!size || !c)
		return (NULL);

	arr = (char*)malloc((sizeof(char) * size));

	for (pos = 0; pos < size; pos++)
	       arr[pos] = c;

	return (arr);
}

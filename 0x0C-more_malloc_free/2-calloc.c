#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory of an array and initializes to 0
 *
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	/*
	 * unsigned in pos;
	*/

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (!p)
		return (NULL);

	/*
	 * for (pos = 0; pos < (nmemb * size); pos++)
	 *	p[pos] = 0;
	*/
	return (p);
}

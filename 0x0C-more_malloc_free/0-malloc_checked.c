#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc and cause
 * normal process termination with status value of 98
 *
 * @b: bytes to allocate
 *
 * Return: pointer or exitcode 98 if it fails
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

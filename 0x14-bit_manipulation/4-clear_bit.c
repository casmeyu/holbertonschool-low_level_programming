#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the data to change (unsigned long int)
 * @index: index of bit to set to 0
 * Return: 1 if it worked or -1 if it failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > 63)
		return (-1);

	*n = (*n | mask);
	*n = (*n ^ mask);

	return (1);
}

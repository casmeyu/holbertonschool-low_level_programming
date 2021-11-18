#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the data to change (unsigned long int)
 * @index: index to set to 1 in data
 * Return: 1 if it worked or -1 if it failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;
	unsigned long int aux_n = *n;
	unsigned int pos;

	if (index > 63)
		return (-1);

	for (pos = 0; pos <= index; pos++)
	{
		if (pos == index)
		{
			if (*n & 1)
				return (-1);
				/*n>>pos already is: 1*/
			else
			{
				*n += mask;
			}
		}
		aux_n >>= 1;
	}

	return (-1);
}

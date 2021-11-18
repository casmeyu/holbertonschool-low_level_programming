#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: long int to search in
 * @index: index to look at
 * Return: value of the bit or -1 if it failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int pos;

	if (index > 63)
		return (-1);

	for (pos = 0; pos <= 63; pos++)
	{
		if (pos == index)
		{
			if (n & 1)
				return (1);
			else
				return (0);
		}
		n >>= 1;
	}

	return (-1);
}

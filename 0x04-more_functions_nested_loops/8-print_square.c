#include "main.h"
/**
 * print_square - this function print a square of n size
 *
 * @size: the int size of the square
 */
void print_square(int size)
{
	int s1, s2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s1 = 0; s1 < size; s1++)
		{
			for (s2 = 0; s2 < size; s2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

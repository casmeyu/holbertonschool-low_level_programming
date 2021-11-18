#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	if (n == 0)
		_putchar('0');
	else
		while (n)
		{
			if (n & mask)
				_putchar('1');
			else 
				_putchar('0');

			n >>= 1;
		}
}

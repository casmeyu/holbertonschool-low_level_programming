#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	while (n)
	{
		if (n & 1)
			_putchar('1');
		else
			_putchar('0');

		n = n >> 1;
	}
}

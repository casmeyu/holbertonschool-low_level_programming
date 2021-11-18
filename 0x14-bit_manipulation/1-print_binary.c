#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned int aux_n;
	int i, flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 63; i >= 0; i--)
	{
		aux_n = n >> i;

		if (aux_n & 1)
		{
			_putchar('1');
			flag++;
		}
		else if (flag > 0)
			_putchar('0');

		aux_n >>= 1;
	}
}

#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 32768;
	int flag = 0;

	if (n == 0)
		_putchar('0');
	else
		while (mask)
		{
			if (n & mask)
			{
				if (flag == 0)
					flag = 65;
				_putchar('1');
			}
			else
				if (flag != 0)
					_putchar('0');

			mask >>= 1;
		}
}
#include "main.h"
#include <stdio.h>
/**
 * print_number - takes an int as parameters and prints it only using _putchar
 *
 * @n: the entering int
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');

}

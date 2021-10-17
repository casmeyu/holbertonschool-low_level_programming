#include "main.h"
/**
 * print_number - takes an int as parameters and prints it only using _putchar
 *
 * @n: the entering int
 */
void print_number(int n)
{
	unsigned int pos = n;

	if (n < 0)
	{
		_putchar('-');
		pos = -n;
	}

	if (pos / 10)
		print_number(pos / 10);

	_putchar(pos % 10 + '0');

}

#include "main.h"
/**
 * print_number - Takes an integer n long and prints its digits
 * one by one recusively
 *
 * @n: number to be printed
 */
void print_number(int n)
{
	unsigned int pos = n;

	if (n < 0)
	{
		_putchar('-');
		pos = -n;
	}

	if (n / 10)
		print_number(pos / 10);

	_putchar(pos % 10 + '0');
}


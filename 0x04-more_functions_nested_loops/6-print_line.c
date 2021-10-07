#include "main.h"
/**
 * print_line - this function takes a number and prints a line
 *
 * @n: number of "_" in line
 */
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

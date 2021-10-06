#include "main.h"

/**
 * times_table - Prints the 9 table
 *
 */
void times_table(void)
{
	int a, b, r;

	for (a = 0; a < 10; a++)
	{
		_putchar('0');
		for (b = 1; b < 10; b++)
		{
			r = a * b;
			_putchar(',');
			_putchar(' ');
			if (r < 10)
			{
				_putchar(' ');
				_putchar(r + '0');
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

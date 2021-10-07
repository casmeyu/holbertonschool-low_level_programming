#include "main.h"
/**
 * print_times_table - gets and integer and prints a matrix of its times table
 * @n: entering int
 */
void print_times_table(int n)
{
	int times, cont, res;

	if (n >= 0 && n <= 15)
		for (times = 0; times <= n; times++)
		{
			for (cont = 0; cont <= n; cont++)
			{
				res = times * cont;
				if (cont == 0)
					_putchar(res + '0');
				else if (res >= 100)
				{
					_putchar(' ');
					_putchar(((res / 100) % 10) + '0');
					_putchar(((res / 10) % 10) + '0');
					_putchar((res % 10) + '0');
				}
				else if (res >= 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				}
				if (cont != n)
					_putchar(',');
			}
			_putchar('\n');
		}
}

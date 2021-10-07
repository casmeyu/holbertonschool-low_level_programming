#include "main.h"
/**
 * print_diagonal - prints a diagonal line based on entering int
 *
 * @n: entering int for delimiting line
 */
void print_diagonal(int n)
{
	int cont, spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (cont = 0; cont < n; cont++)
		{
			for (spaces = 0; spaces < cont; spaces++)
			{
				if (cont != n)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}

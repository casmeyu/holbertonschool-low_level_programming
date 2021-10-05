#include "main.h"
/**
 * times_table - returns the 9 times table
 *
 */
void times_table(void)
{
	int cont;

	for (cont = 0; cont < 10; cont++)
	{
		int m;

		for (m = 0; m < 10; m++)
		{
			int res;

			res = cont * m;
			if (res >= 10)
			{
				_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(res + 48);
			}
			if (m == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
			}
		}
	}
}

#include "main.h"
/**
 * times_table - returns the 9 times table
 *
 */
void times_table(void)
{
	int a, b, r;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			r = a * b;

			if (b == 0)
			{
				_putchar(r + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (r > 9)
                        {
                                _putchar(' ');
                                _putchar((r / 10) + '0');
                                _putchar((r % 10) + '0');
                        }
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			}

			if (b == 9)
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

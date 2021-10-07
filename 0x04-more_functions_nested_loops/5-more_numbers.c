#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int cont, n;

	for (cont = 0; cont < 10; cont++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}

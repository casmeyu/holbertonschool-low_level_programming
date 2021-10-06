#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all the natural numbers from n to 98
 *
 * @n: the staring point
 *
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			int c;
			
			c = i;
			while (c > 10)
			{
				_putchar((c / 10) + '0');
				c = c / 10;
				
			}
		}
	}
	_putchar('\n');
}

int main(void)
{
	print_to_98(120);

	return (0);
}

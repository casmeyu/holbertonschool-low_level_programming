#include "main.h"
/**
 * print_alphabet_x10 - This function prints the alphabet 10 times
 * using the _putchar function in the main.h header
 *
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
		/*
		int c;
		
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		*/
	}
}

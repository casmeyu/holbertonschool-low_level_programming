#include "main.h"
/**
 * main - This function prints the alphabet 10 times
 * using the _putchar function in the main.h header
 *
 * Return: the number 0
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 11; i++)
	{
		int c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	return (0);
}

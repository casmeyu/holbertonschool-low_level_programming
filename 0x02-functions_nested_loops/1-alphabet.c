#include "main.h"
void print_alphabet(void);
/**
 * main - This funcion prints a lowercase alphabet and its a header file
 *
 * Return: the number 0
 *
 */
int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}

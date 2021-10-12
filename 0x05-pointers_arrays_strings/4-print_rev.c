#include "main.h"
/**
 * print_rev - takes a string and prints it in reverse
 * @s: the entering string
 */
void print_rev(char *s)
{
	int pos;

	for (pos = 0; s[pos] != 0;)
	{
		pos++;
	}
	for (pos--; pos >= 0; pos--)
	{
		_putchar(s[pos]);
	}
	_putchar('\n');
}

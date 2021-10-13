#include "main.h"
/**
 * puts_half - prits the last half of a string
 *
 * @str: the entering string
 */

void puts_half(char *str)
{
	int len, pos;

	for (len = 0; str[len] != 0;)
		len++;

	pos = len / 2;
	while (str[pos] != 0)
	{
		_putchar(str[pos]);
		pos++;
	}
	_putchar('\n');
}

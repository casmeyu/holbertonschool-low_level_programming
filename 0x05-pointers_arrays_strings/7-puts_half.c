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

	if (len % 2 == 0)
		pos = len / 2;
	else
		pos = (len - 1) / 2;
	
	while (str[pos] != 0)
	{
		_putchar(str[pos]);
		pos++;
	}

	_putchar('\n');
}

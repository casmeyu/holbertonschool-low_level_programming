#include "main.h"
/**
 * puts2 - this function prits the even indexes of a string
 *
 * @str: the entering string
 */
void puts2(char *str)
{
	int pos;

	for (pos = 0; str[pos] != 0; pos++)
	{
		if (pos % 2 == 0)
			_putchar(str[pos]);
	}
	_putchar('\n');
}

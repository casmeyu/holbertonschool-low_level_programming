#include "main.h"
/**
 * string_toupper - takes a string and changes lower case for upper case
 *
 * @str: entering string
 */
char *string_toupper(char *str)
{
	int pos;
	for (pos = 0; str[pos] != 0; pos++)
	{
		if (str[pos] >= 'a' && str[pos] <= 'z')
			str[pos] -= 32;
	}
	return (str);
}

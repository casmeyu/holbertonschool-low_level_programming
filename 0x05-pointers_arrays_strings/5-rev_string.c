#include "main.h"
#include <stdio.h>
/**
 * rev_string - tankes a string and reverse its value
 *
 * @s: entering string
 */
void rev_string(char *s)
{
	int len, last;
	char aux;

	for (len = 0; s[len] != 0;)
		len++;

	len--;
	for (last = len; last >= 0; last--)
	{
		if (last == len / 2)
		{
			break;
		}
		else
		{
			aux = *(s + (len - last));
			*(s + (len - last)) = *(s + last);
			*(s + last) = aux;
		}
	}
}

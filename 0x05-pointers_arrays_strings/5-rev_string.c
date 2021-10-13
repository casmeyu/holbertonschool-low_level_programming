#include "main.h"
#include <stdio.h>
/**
 * rev_string - tankes a string and reverse its value
 *
 * @s: entering string
 */
void rev_string(char *s)
{
	int j, pos;
	char aux;

	for (pos = 0; s[pos] != 0;)
		pos++;

	pos--;
	for (j = 0; j <= pos / 2; j++)
	{
		aux = s[j];
		s[j] = s[pos];
		s[pos] = aux;
		pos--;
	}

}

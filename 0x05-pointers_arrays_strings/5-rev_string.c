#include "main.h"
/**
 * rev_string - tankes a string and reverse its value
 *
 * @s: entering string
 */
void rev_string(char *s)
{
	int j, pos, length_s;

	for (pos = 0; s[pos] != 0;)
		pos++;

	length_s = pos--;

	char aux;

	for (j = 0; j <= pos / 2; j++)
	{
		aux = s[j];
		s[j] = s[pos];
		s[pos] = aux;

		pos--;
	}

}

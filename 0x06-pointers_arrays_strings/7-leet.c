#include "main.h"
/**
 * leet - this functions takes a strings and encodes it
 * according to leet
 *
 * @s: entering string
 *
 * Return: the processed string
 */
char *leet(char *s)
{
	int pos_s, pos_let;
	char letter[5] = {'a', 'e', 'o', 't', 'l'};
	int l_value[5] = {4, 3, 0, 7, 1};

	for (pos_s = 0; s[pos_s] != 0; pos_s++)
	{
		for (pos_let = 0; letter[pos_let] != 0; pos_let++)
		{
			if (letter[pos_let] == s[pos_s] ||
				(letter[pos_let] - 32) == s[pos_let])
			{
				s[pos_s] = (l_value[pos_let] + '0');
				break;
			}
		}
	}

	return (s);
}

#include "main.h"

/**
 * leet - this functions takes a strings and encodes it
 * according to leet
 *
 * @s: entering string
 *
 * Return: the processed string
 */
char *leet(char *str)
{
	int pos_str, pos_let;
	char letter[5] = {'a', 'e', 'o', 't', 'l'};
	int l_value[5] = {4, 3, 0, 7, 1};

	for (pos_str = 0; str[pos_str] != 0; pos_str++)
	{
		for (pos_let = 0; letter[pos_let] != 0; pos_let++)
		{
			if (letter[pos_let] == str[pos_str] || letter[pos_let] == str[pos_str] + 32)
			{
				str[pos_str] = (l_value[pos_let] + '0');
			}

		}
	}

	return (str);
}

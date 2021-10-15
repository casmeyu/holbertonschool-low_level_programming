#include "main.h"
/**
 * cap_string - inputs a string and upper case the first letter
 * of every word based on the delimmiters
 *
 * @str: the string to be processed
 *
 * Return: the processed string
 */
char *cap_string(char *str)
{
	int pos_str = 0;
	int pos_del;
	char del[] = {32, 10, 9, ',', ';', '.', '!',
		63, 34, '(', ')', '{', '}'};

	if (pos_str == 0 && str[pos_str] >= 'a' && str[pos_str] <= 'z')
		str[pos_str] -= 32;

	for (pos_str += 1; str[pos_str] != 0; pos_str++)
	{
		for (pos_del = 0; del[pos_del] != 0; pos_del++)
		{
			if (str[pos_str] == del[pos_del])
				if (str[pos_str + 1] >= 'a' && str[pos_str + 1] <= 'z')
					str[pos_str + 1] -= 32;
		}
	}

	return (str);
}

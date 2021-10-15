#include "main.h"
#include <stdio.h>
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
	int pos_str;
	int pos_del;
	char del[] = {' ', '\n', 9, ',', ';', '.', '!', '\?', '\"', '(', ')', '{', '}'};

	for (pos_str = 0; str[pos_str] != 0; pos_str++)
	{
		for (pos_del = 0; del[pos_del] != 0; pos_del++)
		{
			if (str[pos_str] == del[pos_del])
			{
				printf("entered first if\nstr value: %c\n del value: %c\n\n", str[pos_str], del[pos_del]);


				if (str[pos_str++] >= 'a' && str[pos_str++] <= 'z')
				{
					printf("entered second if\nstr value: %c\n del value: %c\n\n", str[pos_str], del[pos_del]);

					str[pos_str++] -= 32;
				
				}

			}

		}

	}

	return (str);
}

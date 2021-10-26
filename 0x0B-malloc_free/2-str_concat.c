#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int pos, len1 = 0, len2 = 0;
	char *str;

	if (s1 != NULL)
	{
		/*Iterates over the first string*/
		for (pos = 0; s1[pos] != 0; pos++)
			len1++;
	}
	if (s2 != NULL)
	{
		/*Iterates over the second string*/
		for (pos = 0; s2[pos] != 0; pos++)
			len2++;
	}
	str = (char *)malloc((sizeof(char) * ((len1) + (len2) + 1)));

	if (str == NULL)
		return (NULL);

	for (pos = 0; pos < len1; pos++)
		str[pos] = s1[pos];

	for (pos = 0; pos < len2; pos++)
		str[len1 + pos] = s2[pos];


	return (str);
}

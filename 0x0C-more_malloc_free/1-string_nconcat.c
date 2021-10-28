#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings and returns a pointer
 * to a newly allocated memory cointaining 21 followed by the 
 * first n bytes of s2
 *
 * @s1: first string
 * @s2: string to add
 * @n: number of bytes to add
 *
 * Return: pointer to new concatenated string or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int lens1, lens2, pos_s, pos_p = 0;
	
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	lens1 = strlen(s1);
	lens2 = strlen(s2);

	if (n >= lens2)
		n = lens2;

	p = malloc((lens1 + n) * sizeof(*p) + 1);

	if (!p)
		return (NULL);

	for (pos_s = 0; s1[pos_s] != 0; pos_s++)
	{
		p[pos_p] = s1[pos_s];
		pos_p++;
	}

	for (pos_s = 0; pos_s < n; pos_s++)
	{
		p[pos_p] = s2[pos_s];
		pos_p++;
	}

	p[pos_p] = 0;

	return (p);
}

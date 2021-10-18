#include "main.h"
/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 *
 * @s: string to search in
 * @c: character to find
 *
 * Return: the pointer to the character
 */
char *_strchr(char *s, char c)
{
	unsigned int pos = 0;

	for (pos = 0; s[pos] != 0; pos++)
	{
		if (s[pos] == c)
			return (&s[pos]);
	}
	/* i already tryed passing s[pos] sice is null at the end*/
	return (s[pos]);
}

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
	while (*s != \0)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (s);
}

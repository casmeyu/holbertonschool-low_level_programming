#include "main.h"
#include <stdio.h>
/**
 * palindrome_aux - auxiliary function for palindrome recursion
 * @s: entering string
 * @i: beggining index
 * @e: ending index
 *
 * Return: 1 or 0
 */
int palindrome_aux(char *s, int i, int e)
{
	/* One character (0 = (1 - 1)) */
	if (i == e)
		return (1);

	if (s[i] != s[e])
		return (0);

	if (i < e + 1)
		return (palindrome_aux(s, (i + 1), (e - 1)));

	return (1);
}
/**
 * count_rec - strlen but recursively
 *
 * @s: string to check
 * @n: counter
 *
 * Return: the length
 */
int count_rec(char *s, int n)
{
	if (*s == 0)
		return (n);

	return (count_rec((s + 1), n + 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: string to check
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len_s = 0;

	if (*s == 0)
		return (1);

	len_s += count_rec(s, len_s);
	return (palindrome_aux(s, 0, (len_s - 1)));
}

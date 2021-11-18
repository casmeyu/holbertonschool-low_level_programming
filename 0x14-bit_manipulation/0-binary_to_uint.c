#include "main.h"

/**
 * _pow - returns x ^ n
 * @x: base number
 * @n: exponent
 * Return: x ^ n
 */
int _pow(int x,int n)
{
	int i, res = 1;

	for (i = 0; i < n; i++)
		res *= x;

	return(res);
}

/**
 * binaty_to_int - converts a binary number to an unsigned int
 * @b: pointer to a string composed of 0 and 1 chars
 * Return: converted number or 0 if (b == NULL | b[x] != (0 | 1))
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len, pos = 0;

	if (!b)
		return (result);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	len--;

	for (; len >= 0; len--)
	{
		if (b[len] == '1')
			result += _pow(2, pos);
		pos++;
	}
	
	return (result);
}

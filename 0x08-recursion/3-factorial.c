#include "main.h"
/**
 * factorial - returns the factorial of a given number
 *
 * @n: number to factorize
 *
 * Return: the factorial of n and - if (n < 0)
 */
int factorial(int n)
{
	int res = n;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	res *= factorial(n - 1);

	return (res);
}

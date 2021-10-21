#include "main.h"
/**
 * prime_aux - auxiliary function for prime recursion
 *
 * @n: number to check
 * @i: counting value for module (n % i)
 *
 * Return: 1 or 0
 */
int prime_aux(int n, int i)
{
	if (i == n)
		return (1);

	if (n % i == 0)
		return (0);

	return (prime_aux(n, (i + 1)));
}


/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 *
 * @n: number to check
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2)
		return (1);

	return (prime_aux(n, 2));
}

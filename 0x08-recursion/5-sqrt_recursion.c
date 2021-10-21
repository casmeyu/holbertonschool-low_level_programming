#include "main.h"
/**
 * sqrt_aux - auxiliary function for the recursion of sqrt
 *
 * @n: original number
 * @i: number to increment and test against n
 *
 * Return: the square of n or -1 if it doesnt have one
 */
int sqrt_aux(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (sqrt_aux(n, (i + 1)));

}

/**
 * _sqrt_recursion - eturns the natural square root of a number
 *
 * @n: number to calculate sqrt
 *
 * Return: the sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_aux(n, 0));
}

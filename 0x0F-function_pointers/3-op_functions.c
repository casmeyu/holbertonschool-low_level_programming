#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds the two entering ints
 *
 * @a: first number
 * @b: second number
 *
 * Return: the summ of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts the two entering ints
 *
 * @a: first number
 * @b: second number
 *
 * Return: the substraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies the twi entering ints
 *
 * @a: first number
 * @b: second number
 *
 * Return: the multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides the two entering ints
 *
 * @a: first number
 * @b: second number
 *
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - returns the rest of the division of a / b
 *
 * @a: number to be divided
 * @b: divisor
 *
 * Return: the rest of a over b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}


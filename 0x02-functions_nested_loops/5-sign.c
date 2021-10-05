#include "main.h"
/**
 * print_sign - prints if the number is positive, negative or zero
 *
 * @n: its the entering number
 *
 * Return: 1, 0 or -1 depending on the sign
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

#include "main.h"
/**
 * print_number - Takes an integer n long and prints its digits
 * one by one recusively
 *
 * @n: number to be printed
 */
void print_number(int n)
{
	/* 
	 * If number is smaller than 0, put a - sign and convert n
	 */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/*
	 * Divide by 10 and recur
	 */
	if (n / 10)
	print_number(n / 10);

	_putchar(n % 10 + '0');
}


#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: the number 0
 */
int main(void)
{
	int c = 'a';

	for (c; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - this is the main function for printing the alphabet
 *
 * Return: the number 0
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

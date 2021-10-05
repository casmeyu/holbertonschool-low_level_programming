#include "main.h"
/**
 * main - this is a function that prints "_putchar"
 *
 * Return: then number 0
 *
 */
int main(void)
{
	int c;
	char message[] = "_putchar";

	for (c = 0; message[c] != 0; c++)
	{
		_putchar(message[c]);
	}
	_putchar('\n');
	return (0);
}

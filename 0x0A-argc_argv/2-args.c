#include <stdio.h>
/**
 * main - prints all the entering arguments (*argv[])
 *
 * @argc: argument counter
 * @argv: list of arguments
 *
 * Return: number 0
 */
int main(int argc, char *argv[])
{
	int pos_arg;

	for (pos_arg = 1; pos_arg < argc; pos_arg++)
	{
		printf("%s\n", argv[pos_arg]);
	}

	return (0);
}

#include <stdio.h>
/**
 * main - prints the number of passed arguments
 *
 * @argc: argument counter
 * @argv: list of arguments
 *
 * Return: number 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}

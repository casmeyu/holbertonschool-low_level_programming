#include <stdio.h>
/**
 * main - prints the name of the program based on the argument
 *
 * @argc: argument counter
 * @argv: list of arguments
 *
 * Return: the number 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

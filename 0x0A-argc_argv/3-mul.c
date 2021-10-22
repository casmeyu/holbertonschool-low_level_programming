#include <stdio.h>
#include <stdlib.h>
/**
 * main - takes two numbers, multiplies them and prints the result
 *
 * @argc: argument counter
 * @argv: list of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int res = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds all the positive numbers in *argv[]
 *
 * @argc: argument counter
 * @argv: list of arguments
 *
 * Return: number 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int pos, j = 0, res = 0;

	for (pos = 1; argv[pos] != 0; pos++)
	{
		for (j = 0; argv[pos][j] != 0; j++)
		{
			if (argv[pos][j] >= '0' && argv[pos][j] <= '9')
			{
				continue;
			}
			else
			{
				printf("Error\n");
				return (-1);
			}
		}

		res += atoi(argv[pos]);
	}

	printf("%d\n", res);

	return (0);
}

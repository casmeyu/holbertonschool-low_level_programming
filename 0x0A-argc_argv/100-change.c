#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make
 * change for an amount of money
 *
 * @argc: argument counter
 * @argv: list of arguments
 *
 * Return: the number 0
 */
int main(int argc, char *argv[])
{

	int coin[] = {25, 10, 5, 2, 1};
	int pos, res = 0;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	for (pos = 0; cents > 0;)
	{
		if (coin[pos] > cents)
			pos++;
		else
		{
			cents -= coin[pos];
			res++;
		}
	}
	printf("%d\n", res);

	return (0);
}

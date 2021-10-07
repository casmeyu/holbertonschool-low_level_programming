#include <stdio.h>
/**
 * main - this function prints the first 50 numbers from fibonacci
 *
 * Return: the number 0
 */
int main(void)
{
	long actual, anterior;
	int cont, res;

	res = 0;
	actual = 1;
	anterior = 0;
	for (cont = 1; cont <= 50; cont++)
	{
		actual = anterior + actual;
		res = actual;
		while (res >= 10)
		{
			res = res / 10;
		}
		if (res == 1 || res == 2)
		{
			printf("%ld", actual);

			if (actual == 1836311903)
				putchar('\n');
			else
				printf(", ");
		}

		anterior = actual - anterior;
	}
	return (0);
}

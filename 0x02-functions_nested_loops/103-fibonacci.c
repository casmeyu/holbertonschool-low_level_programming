#include <stdio.h>
/**
 * main - this function prints the first 50 numbers from fibonacci
 *
 * Return: the number 0
 */
int main(void)
{
	int cont, actual, anterior, res;

	res = 0;
	actual = 1;
	anterior = 0;
	for (cont = 1; cont <= 50; cont++)
	{
		actual = anterior + actual;
		if (actual > 4000000)
			break;
		if (actual % 2 == 0)
		{
			res = res + actual;
		}
		anterior = actual - anterior;
	}
	printf("%d\n", res);
	return (0);
}

#include <stdio.h>
/**
 * main - this function prints the first 50 numbers from fibonacci
 *
 * Return: the number 0
 */
int main(void)
{
	int cont, actual, anterior;

	actual = 1;
	anterior = 0;
	for (cont = 1; cont <= 50; cont++)
	{
		actual = anterior + actual;
		if (actual > 4000000)
			break;
		printf("%d, ", actual);
		anterior = actual - anterior;
	}
	return (0);
}

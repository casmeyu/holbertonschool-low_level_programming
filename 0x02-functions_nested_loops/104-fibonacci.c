ii#include <stdio.h>
/**
 * main - this function prints the first 50 numbers from fibonacci
 *
 * Return: the number 0
 */
int main(void)
{
	long actual, anterior, res;
	int cont;

	res = 0;
	actual = 1;
	anterior = 0;
	for (cont = 1; cont < 98; cont++)
	{
		actual = anterior + actual;
		

		anterior = actual - anterior;
	}
	printf("%d\n", res);
	return (0);
}

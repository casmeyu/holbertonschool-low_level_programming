#include <stdio.h>
/**
 * main - this function prints all natural numbers multiples of 3 and 5
 * from 0 to 1023
 *
 * Return: the number 0
 */
int main(void)
{
	int n, res;

	res = 0;
	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			res += n;
		}
	}
	printf("%d\n", res);
	return (0);
}

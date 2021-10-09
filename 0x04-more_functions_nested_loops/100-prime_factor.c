#include <stdio.h>
long _is_prime(long n);
/**
 * main - this function prints the larges prime factor of 612852475143
 *
 * Return: the number 0;
 */
int main(void)
{
	long num, div;

	/*num = 2547;*/
	num = 612852475143;
	div = 2;

	while (div < num / 2)
	{
		if (num % div == 0)
		{
			num /= div;
			div = 2;
		}
		else
		{
			div++;
		}
	}

	printf("%ld\n", num);

	return (0);
}

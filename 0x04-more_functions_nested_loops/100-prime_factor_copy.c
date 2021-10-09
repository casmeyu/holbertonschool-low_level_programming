#include <stdio.h>
long _is_prime(long n);
/**
 * main - this function prints the larges prime factor of 612852475143
 *
 * Return: the number 0;
 */
int main(void)
{
        short flag;
	long num, largest_prime, i, j;

	/*num = 1231952;*/
	num = 612852475143;
	largest_prime = 0;
	for (i = 2; i <= (num / 2); i++)
	{
		/*printf("num: %ld\ni: %ld\n", num, i);*/
		if (num % i == 0)
		{
			flag = 1;
			for (j = 2; j <= (i / 2); j++)
			{
				if (i % j == 0)
				{
					flag = 0;
				}
			}
			if (flag == 1)
			{
				largest_prime = i;
			}
		}
	}
		
	printf("\n\n\n\nThe largest factor prime number is: %ld\n", largest_prime);
	
	return (0);		
}

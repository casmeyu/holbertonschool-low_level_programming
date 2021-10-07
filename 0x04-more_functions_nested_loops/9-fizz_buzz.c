#include <stdio.h>
/**
 * main - does the fizz buzz for the numbers from 0 to 100
 *
 * Return: the number 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}

		if (n == 100)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}

	return (0);
}

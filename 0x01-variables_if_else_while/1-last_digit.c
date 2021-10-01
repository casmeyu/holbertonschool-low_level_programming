#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - this is the main function for the last digit
 *
 * Return: the number 0
 */
int main(void)
{
	int n, count;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d \n", n, n % 10);
	/* your code goes there */

	return (0);
}

#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 *
 * @a: the 2d square array
 * @size: the size of the square array
 */
void print_diagsums(int *a, int size)
{
	int pos, sum1 = 0, sum2 = 0;

	for (pos = 0; pos < size; pos++)
	{
		sum1 += a[(size + 1) * pos];
		sum2 += a[(size - 1) * (pos + 1)];
	}

	printf("%d, %d\n", sum1, sum2);

}


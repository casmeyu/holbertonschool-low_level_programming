#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 *
 * @a: entering array
 * @n: number of items on the array
 */
void print_array(int *a, int n)
{
	int pos;

	for (pos = 0; pos < n; pos++)
	{
		printf("%d", a[pos]);
		if (pos != n - 1)
			printf(", ");
	}
	printf("\n");
}

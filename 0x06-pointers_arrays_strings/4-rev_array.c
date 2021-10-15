#include "main.h"
/**
 * reverse_array - takes an array of integers and reverse it
 *
 * @a: entering array
 * @n: length of array
 */
void reverse_array(int *a, int n)
{
	int pos, aux;

	for (pos = 0; pos < n; pos++)
	{
		n--;
		aux = a[n];
		a[n] = a[pos];
		a[pos] = aux;
	}
}

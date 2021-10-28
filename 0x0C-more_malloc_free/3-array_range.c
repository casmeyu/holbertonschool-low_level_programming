#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers that contains all the values from
 * min (included) to max (included)
 *
 * @min: min int
 * @max: max int
 *
 * Return: a pointer to the array or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int range, pos;

	if (min > max)
		return (NULL);

	range = ((max - min) + 1);

	arr = malloc(range * sizeof(*arr));

	if (!arr)
		return (NULL);

	for (pos = 0; pos < range; pos++)
	{
		arr[pos] = min;
		min++;
	}

	return (arr);
}

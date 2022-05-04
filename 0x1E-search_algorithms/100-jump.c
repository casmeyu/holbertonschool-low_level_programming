#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searchs for a given value in an array using jump search
 *
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: the index of the value found or -1 if it doesn't exists
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, idx = 0;

	if (size < 1 || !array)
		return (-1);
	step = (size_t)(sqrt((double)(size)));

	while (idx < size)
	{
		if (value <= array[idx])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", idx - step, idx);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		idx += step;
	}
	if (idx >= size)
		printf("Value found between indexes [%ld] and [%ld]\n", idx - step, idx);
	idx -= step;
	for (; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (value == array[idx])
			return (idx);
	}
	return (-1);
}

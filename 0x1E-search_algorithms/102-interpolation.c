#include "search_algos.h"
/**
 * interpolation_search - searchs for value in array using interpolation search
 *
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: the index of the value found or -1 if it doensn't exists
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, idx;

	if (size < 1 || !array)
		return (-1);

	low = 0, high = size - 1;

	while (low < high)
	{
		idx = ((double)(high - low) / (array[high] - array[low]));
		idx *= (value - array[low]);
		idx += low;
		if (idx > size)
		{
			printf("Value checked array[%ld] is out of range\n", idx);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (value == array[idx])
			return (idx);
		if (value < array[idx])
			high = idx - 1;
		else if (value > array[idx])
			low = idx + 1;
	}
	return (idx);
}

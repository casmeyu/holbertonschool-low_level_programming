#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - that searches for an integer and returns the index
 * of the first match
 *
 * @array: array on ints
 * @size: size of the array
 * @cmp: compare function that returns != 0 when it passes
 *
 * Return: Pointer to the first item found, -1 if not found or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int pos;

	if (size <= 0)
		return (-1);

	if (cmp && array)
	{
		for (pos = 0; pos < size; pos++)
		{
			if (cmp(array[pos]))
				return (pos);
		}
	}
	return (-1);
}

#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 *
 * @array: array of elements
 * @size: size of the array
 * @action: function to execute foe every element of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int pos;

	for (pos = 0; pos < size; pos++)
	{
		action(array[pos]);
	}
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 *
 * @width: position x
 * @height: position y
 *
 * Return: *ptr to arr[x][y] or NULL if fail
 */
int **alloc_grid(int width, int height)
{
	int **ar, pos;

	ar = malloc((width * height) * sizeof(int));

	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}

	for (pos = 0; pos < width; pos++)
	{
		ar[pos] = malloc(height * sizeof(int));

		if (ar[pos] == NULL)
		{
			for (;pos > 0; pos--)
			{
				free(ar[pos]);
			}
			free(ar);
		}
	}

	return (ar);
}

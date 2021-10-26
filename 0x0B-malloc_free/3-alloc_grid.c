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

	if (width == 0 || height == 0)
		return (NULL);

	ar = malloc((height) * sizeof(int *));

	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}

	for (pos = 0; pos < height; pos++)
	{
		ar[pos] = malloc(width * sizeof(int));

		if (ar[pos] == NULL)
		{
			for (; pos >= 0; pos--)
			{
				free(ar[pos]);
			}
			free(ar);

		}
	}

	return (ar);
}

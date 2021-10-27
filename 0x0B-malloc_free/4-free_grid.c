#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created
 *
 * @grid: **grid pointer to 2d array
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int pos;

	for (pos = 0; pos < height; pos++)
	{
		free(grid[pos]);
	}
	free(grid);
}

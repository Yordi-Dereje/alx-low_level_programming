#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees the alloc_grids
 * @grid: the passed 2D array
 * @height: the row
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}

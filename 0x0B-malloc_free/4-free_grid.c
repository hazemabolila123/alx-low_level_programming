#include "main.h"
#include <stdlib.h>
/**
 * free_grid - A function that frees a 2 dimensional grid.
 * @grid: Function parameter
 * @height: Function parameter
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

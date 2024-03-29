#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees the memory of a 2 dimensional grid
 * @grid: The 2 dimensional grid
 * @height: The height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

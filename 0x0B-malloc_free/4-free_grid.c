#include <stdlib.h>

/**
 * free_grid - entry point
 * @grid: pointer to grid
 * @height: grid height
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}

}

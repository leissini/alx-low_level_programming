#include "main.h"
#include <stdlib.h>
/**
  * free_grid - free a 2D array
  * @grid: pointer to a 2D array
  * @height: number of rows in the grid
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
	}
	free(grid);
}

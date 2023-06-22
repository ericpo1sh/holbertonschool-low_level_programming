#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - will retrun a pointer to our grid
 * @grid : our grid
 * @height : the heighth of matrix
 */
void free_grid(int **grid, int height)
{
	int x;
	
	if (grid != NULL)
	for (x = height; x >= 0; x--)
		free(grid[x]);

	free(grid);
}

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - creates a two dimentional array
 * @width : the width of my matrix
 * @height : the height of my matrix
 * Return: pointer tot he matrix if it works, null if it dont.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 0 || height < 0)
		return (NULL);

	grid = (int **) malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height ; i++)
	{
		grid[i] = (int *) malloc(sizeof(int *) * width);
		if (grid[i] == NULL)
		{
			free(grid);
			for (j = 0; j <= i; j++)
			free(grid[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

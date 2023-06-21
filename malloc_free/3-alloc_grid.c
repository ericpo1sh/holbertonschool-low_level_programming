#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 *
 *
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * (sizeof(int *));
		if (grid == NULL)
		return (NULL);



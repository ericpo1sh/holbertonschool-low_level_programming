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
	int **gridd;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	gridd = malloc(sizeof(int *) * height);

	if (gridd == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		gridd[i] = malloc(sizeof(int) * width);
		if (gridd[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			free(gridd[j]);
			free(gridd);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			gridd[i][j] = 0;
		}
	}
	return (gridd);
}

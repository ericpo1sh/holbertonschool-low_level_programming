#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array from min to max
 * @min : min (starting point)
 * @max : max (ending point)
 * Return: NULL if malloc fails, if min ge max, pointer to array.
 */
int *array_range(int min, int max)
{
	int *p;
	int x;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * (sizeof(int)));

	if (p == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		p[x] = x + min;

	return (p);
}

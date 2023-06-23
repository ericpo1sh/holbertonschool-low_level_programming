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
	int *pointertoarray;
	int xijinping;

	if (min > max)
		return (NULL);

	pointertoarray = malloc((max - min + 1) * (sizeof(int)));

	if (pointertoarray == NULL)
		return (NULL);

	for (xijinping = 0; min <= max; xijinping++)
		pointertoarray[xijinping] = xijinping + min;

	return (pointertoarray);
}

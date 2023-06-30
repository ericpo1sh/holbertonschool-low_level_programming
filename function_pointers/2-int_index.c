#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - increments cmp function with the array
 * @array : array of elements
 * @size : size of the array
 * @cmp : function pointer
 * Return: -1 if invalid arguements or not found, x if passed.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	if (cmp != NULL)
		if (array != NULL)
			for (; x < size; x++)
			{
				cmp(array[x]);
				if (cmp(array[x]) > 0)
					return (x);
			}
	if (cmp(array[x]) == 0)
		return (-1);

	return (0);
}

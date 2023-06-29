#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

		

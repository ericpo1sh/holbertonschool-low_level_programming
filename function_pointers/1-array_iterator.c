#include "function_pointers.h"
#include <stdio.h>
/**
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x = 0;

	if (action != NULL)
	if(array != NULL)
	{
		for (; x < size; x++)
			action(array[x]);
	}
}

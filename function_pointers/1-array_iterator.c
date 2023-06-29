#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - iterates through our array
 * @array : our array
 * @size : size of array
 * @action : pointer to the function we use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x = 0;

	if (action != NULL)

	if (array != NULL)
	{
		for (; x < size; x++)
			action(array[x]);
	}
}

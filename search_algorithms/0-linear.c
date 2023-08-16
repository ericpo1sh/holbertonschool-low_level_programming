#include "search_algos.h"

/**
 * linear_search - searches for a value in array
 * @array: array of ints
 * @size: size of array
 * @value: value to search for
 * Return: status if found or not
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
		printf("Value checked array[%ld] = [%d]", i, array[i]);
	}
	return (-1);
}

#include "search_algos.h"

/**
 * binary_search - searches for value in array using binary search algorithm
 * @array: the array of integers
 * @size: the size of the array
 * @value: the value that we are searching for
 * Return: -1 if data isnt present, mid if it is present.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L = 0;
	size_t R = size - 1;
	size_t mid = 0;

	mid = (L + R) / 2;

	if (array)
	{
		while (L <= R)
		{
			if (value == array[mid])
				return (mid);

			else if (value < array[mid])
				R = mid - 1;
			else
				L = mid + 1;
		}
	}
	return (-1);
}

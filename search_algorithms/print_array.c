#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: array of ints
 * @size: size of the array
 */
void print_array(const int *array, size_t size)
{
	size_t i = 0;

	for (i = 0; array && i < size; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n")
}

#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - will print out random arrays given
 *
 * @a : the var pointing to the array
 * @n : is the array number that will be random.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

	if (i == n - 1)
	continue;

	printf(", ");
	}
	printf("\n");
}

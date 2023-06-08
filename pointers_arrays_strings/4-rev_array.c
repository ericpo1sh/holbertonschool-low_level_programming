#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * reverse_array - will reverse the order of the array
 * @a : this value holds the array
 * @n : this value represents the size
 * j is my decrementing array pointer
 * i is my incrementing array pointer
 * temp is the temporary int i use to swap orders
 */
void reverse_array(int *a, int n)
{
	int j;
	int temp;
	int i;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}

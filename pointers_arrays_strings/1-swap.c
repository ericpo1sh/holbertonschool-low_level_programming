#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps pointers values.
 * @a : value used to be 98, now its 42.
 * @b : value used to ve 42, now its 98.
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}

#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 */
void reset_to_98(int *n)
{
	int x = 98;

	*n = &x;

	return (*n);
}

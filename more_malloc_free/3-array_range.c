#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 */
int *array_range(int min, int max)
{
	int *p;

	if (min > max)
		return (NULL);

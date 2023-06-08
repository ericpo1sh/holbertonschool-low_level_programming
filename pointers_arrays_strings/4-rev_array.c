#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *
 *
 *
 *
 */
void reverse_array(int *a, int n)
{
	for (int i = 0; j = n - 1; i < j; i++, j--)
	{
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}

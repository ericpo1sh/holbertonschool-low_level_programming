#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	int j = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (; i < n; i++)
	{
		j = va_arg(args, int);
		sum += j;
	}
	va_end(args);
	return (sum);
}

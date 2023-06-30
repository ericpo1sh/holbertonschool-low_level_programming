#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - will sum up all numbers from the variadic func
 * @n - size of arguements
 * Return: 0 if size is 0, sum if works.
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

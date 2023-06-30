#include "variadic_functions.c"
#include <stdio.h>
#include <stdarg.h>
/**
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = 0;
	int va_arg;
	int sum;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (; i < n; i++)
	{
		va_arg(args, int);
		sum += va_arg;
	}
	printf("%d", sum);
`	return (0);
}

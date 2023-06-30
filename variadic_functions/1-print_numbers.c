#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int j = 0;
	va_list args;

	va_start(args, n);

	if (separator != NULL)
	{
		for (; i < n; i++)
		{
			j = va_arg(args, int);
			printf("%d", j);
			if (i != n - 1)
			printf("%s", separator);
		}
		va_end(args);
		prinf("\n");
	}
}

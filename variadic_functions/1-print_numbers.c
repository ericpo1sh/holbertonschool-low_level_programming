#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints all the numbers in the arg list
 * @separator : points to sep string
 * @n size of the arg list
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int j = 0;
	va_list args;

	va_start(args, n);

	for (; i < n; i++)
	{
		j = va_arg(args, int);
		printf("%d", j);
		if (i != n - 1 && separator != NULL)
		printf("%s", separator);
	}
		va_end(args);
		printf("\n");
}

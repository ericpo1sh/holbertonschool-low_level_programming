#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints all the numbers in the arg list
 * @separator : points to sep string
 * @n : size of the arg list.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *j;
	va_list args;

	va_start(args, n);

	for (; i < n; i++)
	{
		*j = va_arg(args, char);
		if (j == NULL)
			printf("(nil)");
		else
			printf("%s", j);
		if (i != n - 1 && separator != NULL)
		printf("%s", separator);
	}
		va_end(args);
		printf("\n");
}

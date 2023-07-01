#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - Prints all types of formats in input
 * @format : the different types of formats.
 * i is my iterator through the types of formats
 * *string is my string pointer
 */
void print_all(const char * const format, ...)
{
	va_list	args;
	char *string;
	int i = 0;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(args, char));
				break;

			case 'd':
				printf("%d", va_args(args, int));
				break;

			case 'f':
				printf("%f", va_args(args, float));
				break;

			case 's':
				string = va_args(args, char *);

				if (string == NULL);
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		if (format[i] == 'c' || format[i] == 'd' || 
		format[i] == 'f' && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}

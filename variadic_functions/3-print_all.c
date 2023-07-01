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
	va_list	vers;
	char *string;
	int i = 0;

	va_start(vers, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(vers, int));
				break;

			case 'f':
				printf("%f", va_arg(vers, double));
				break;

			case 'c':
				printf("%c", (char) va_arg(vers, int));
				break;

			case 's':
				string = va_arg(vers, char *);

				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'd' ||
		format[i] == 'f') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(vers);
}

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions"
/**
 *
 *
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
				printf("%c", va_arg(args, char);
				break;
			case 'd':
				printf("%d", va_arg(args, int);
				break;
			case 'f':
				printf("%f", va_args(args, float);
				break;
			case 's':
				string = va_arg(args, char *);
				if (string == NULL);
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}


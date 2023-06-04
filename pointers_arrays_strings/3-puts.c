#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _puts - prints out the entire string.
 * @str : the char that points to the string.
 * i is the starting point, ends at null.
 */

void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

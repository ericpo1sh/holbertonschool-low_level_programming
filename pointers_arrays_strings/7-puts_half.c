#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - prints out half of the string.
 * @str : the char that points to the string.
 * i is the starting point, ends at null.
 * n will be the variable we use to calculate length / 2
 */

void puts_half(char *str)
{
	int i;
	int n = (strlen(str) + 1) / 2;
	int x = (strlen(str) - 1);

	for (i = n; i <= x; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

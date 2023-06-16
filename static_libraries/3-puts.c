#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _puts - prints out the entire string.
 * @str : the char that points to the string.
 * i is the starting point, ends at null.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

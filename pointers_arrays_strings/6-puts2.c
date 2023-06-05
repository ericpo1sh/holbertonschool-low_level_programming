#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts2 - prints out every other character in string.
 * @str : the char that points to the string.
 * i is the starting point, ends at null.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

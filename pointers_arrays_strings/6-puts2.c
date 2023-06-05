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
	int i = 0;

	while (str[i] != '\0')
		i++;
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}

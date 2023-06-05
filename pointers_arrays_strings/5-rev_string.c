#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string - prints out the string but backwards.
 * i : current position of the character in the string
 * @s : the string to be reversed.
 */
void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

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
	int x;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

	for (x = strlen(s) - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * _strlen - gives us the length of the string
 *
 * @s : var pointed to where string is stored.
 */
int _strlen(char *s)
{
	int len;

	len = strlen(*s);

	_putchar('len' + 1);

	return (0);
}

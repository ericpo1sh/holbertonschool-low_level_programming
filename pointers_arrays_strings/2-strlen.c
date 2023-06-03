#include "main.h"
#include <stdio.h>

/**
 * _strlen - gives us the length of the string
 *
 * @s : var pointed to where string is stored.
 */
int _strlen(char *s)
{
	*s = strlen(*s);

	_putchar(*s);

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * _strlen - gives us the length of the string
 *
 * @s : var pointed to where string is stored.
 *
 * Return: the size of the current string.
 */
int _strlen(char *s)
{
	char str = *s;
	int length = strlen(str);

	return(length);
}

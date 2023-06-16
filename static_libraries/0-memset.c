#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - will convert an unsigned int to an unsigned char
 * @s : the pointer thats pointing to the string that is updated
 * @b : the char that unsigned int n will convert to
 * @n : the size in bytes
 * Return: the result (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = (unsigned char *)s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}
	return (s);
}

#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *
 *
 *
 *
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

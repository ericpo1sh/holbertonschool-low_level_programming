#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memcpy - will copy everything from the src to dest
 * @dest : our destination of what we're copying
 * @src : the source of what we are copying
 * @n : the size in bytes of how many chars we can cpy
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);

}

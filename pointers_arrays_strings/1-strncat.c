#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (x = 0; x < n && src[x] != '\0' ; x++)
		dest = src[x];

	dest = '\0';
	return (dest);
}

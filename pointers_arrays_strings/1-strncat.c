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

	if (src[x] != '\0')
	for (x = 0; x < n; x++)
	{
		dest[i + x] = src[x];
	}
	dest[i + x] = '\0';

	return (dest);
}

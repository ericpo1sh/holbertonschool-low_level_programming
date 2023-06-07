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

	if (x < n)	
	while (src[x] != '\0')
	{
		i++;
		x++;
	}
	dest = '\0';
	return (dest);
}

#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * @dest : the destination of where we want to concatenate our src to.
 * @src : the string that we are going to concatenate to dest.
 * Return : the result aka wahts in dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int x = 0;
	
	while (dest[i] != '\0')
	{
		i++;
	}
	
	while (src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';

	return dest;
}

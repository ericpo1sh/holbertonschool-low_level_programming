#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *
 *
 *
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = strlen(src);

	for (i = 0; i < len; i++)
		src[i] = dest[i];

	dest[i] = '\0';

	return(dest);
}

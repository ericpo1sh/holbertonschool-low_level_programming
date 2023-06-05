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

	for (i = 0; src[i] <= '\0'; i++)
		src[i] = dest[i];

	return(dest);
}

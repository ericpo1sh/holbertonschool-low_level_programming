#include <string.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned char *memeset = (unsigned char *)p;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p != NULL)
	{
		while (size--)
		{
			*memeset++ = (unsigned char)0;
		}
	}

	return (p);
}

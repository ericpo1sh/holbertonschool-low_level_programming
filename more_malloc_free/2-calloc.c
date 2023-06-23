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
	void *p;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

		memset(p, 0, nmemb * size);

	return (p);
}

#include <string.h>
#include <stdio.h>
#include "main.h"
#include <stdio.h>
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

	p = maalloc(nmemb * size);

	return (p);
}

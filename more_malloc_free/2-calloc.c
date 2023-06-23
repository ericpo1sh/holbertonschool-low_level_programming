#include <string.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _calloc - will set bytes of allocation to 0
 * @nmemb : the size of our array
 * @size : the size in bytes
 * Return: Null if segfualt, Null if ints 0, P if sucess.
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

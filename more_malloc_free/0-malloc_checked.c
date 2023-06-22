#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - will check our malloc
 * @b : this is our awaited input
 * p is pointer to malloc
 * Return: p is success
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}

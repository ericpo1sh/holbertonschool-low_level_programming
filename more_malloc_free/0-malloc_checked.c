#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	
	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
		



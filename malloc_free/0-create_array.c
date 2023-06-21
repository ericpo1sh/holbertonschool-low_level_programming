#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;

	if (size == 0)
		return (NULL);

	b = malloc(sizeof(char) * size);

	if (b == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		b[i] = "c";

	return (b);
}


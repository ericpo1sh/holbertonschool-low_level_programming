#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - will create an array of chars moves it to c
 * @size : this the size that they give us
 * @c : this is where the array will be stored
 * Return: if size 0 then null, if b 0 then null, else return b.
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
		b[i] = c;

	return (b);
}


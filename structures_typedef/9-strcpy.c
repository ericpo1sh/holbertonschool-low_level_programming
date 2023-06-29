#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcpy - will copy whats on src and move it to dest with the null
 * @dest : the destination where we copy our string to.
 * @src : the source of where our string is.
 * Return: dest string.
 * i is the array spot
 * len is the stringlegth of src
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = strlen(src);

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

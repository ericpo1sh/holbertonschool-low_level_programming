#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _strncpy - will copy string from src to dest
 * @dest : the destinaton of the string we copied
 * @src : the source string where we copy
 * Return: the dring contained in destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

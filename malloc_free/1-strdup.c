#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - will duplicate the strinh into arr
 * @str - the string given to us
 * len - this is the stringlength of str
 * arr is our destination location
 * i is my counter to transfer memory
 * Return: Null if triggered, arr for clone.
 */
char *_strdup(char *str)
{
	char *arr;
	int len;
	int i;

	if (str == 0)
		return (NULL);

	len = strlen(str) + 1;
	arr = malloc(sizeof(char) * len);

	if (arr == 0)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = str[i];

	return (arr);
}


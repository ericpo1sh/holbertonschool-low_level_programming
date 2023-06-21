#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 */
char *_strdup(char *str)
{
	char *arr;
	int len;
	int i;

	if (str == 0)
		return (NULL);

	len = strlen(str) + 1;
	arr = malloc(sizeof(char) * size);

	if (arr == 0)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = str[i]

	return (arr);
}


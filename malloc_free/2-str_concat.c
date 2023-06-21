#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * str_concat - will concatenate two strings into new dest
 * @s1 : first string 
 * @s2 : second string
 * Return: null if failed, result if worked.
 *
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j, x;
	char *dest;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2) + 1;

	dest = malloc((len1 + len2) * sizeof(char));

	if (dest == 0)
		return (NULL);

	for (i = 0, x = 0; s1[i]; i++, x++)
	{
		dest[x] = s1[i];
	}
	for (j = 0; s2[j]; j++, x++)
	{
		dest[x] = s2[j];
	}
	dest[x] = '\0';

	return (dest);
}


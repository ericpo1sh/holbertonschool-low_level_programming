#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *
 *
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *dest;

	if (s1 == 0)
		return (NULL);

	if (s2 == 0)
		return (NULL);

	len1 = strlen(s1) + 1;
	len2 = strlen(s2) + 1;

	dest = malloc((len1 + len2) * sizeof(char));

	for (i = 0; i < len1; i++)
		dest[i] = s1[i];
	for (j = 0; j < len2; j++)
		dest[j] = s2[j];
	return (dest);
}

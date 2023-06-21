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
	int x = 0;
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

	for (i = 0; s1[i]; i++)
	{
		x++;
		dest[x] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		x++;
		dest[x] = s2[j];
	}
	dest[x] = '\0';

	return (dest);
}

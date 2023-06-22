#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1;
	int i, j, x;
	char *dest;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	
	dest = malloc((len1 + n) * sizeof(char));
	
	if (dest == 0)
		return (NULL);

	for (i = 0, x = 0,; s1[i]; i++, x++)
	{
		dest[x] = s1[i];
	}
	for (j = 0; j < n; j++, x++)
	{
		dest[x] = s2[j];
	}
	dest[x] = '\0';

	return (dest);
}



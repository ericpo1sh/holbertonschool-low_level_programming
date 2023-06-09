#include "main.h"
/**
 *
 *
 *
 *
 */

char *_strbrk(char *s, char *accept)
{
	int i, j;
	int z;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				s[i] = accept[j];
				z = 1;
			}
	if (z == 1)
		return(s);
	else
		return(0);

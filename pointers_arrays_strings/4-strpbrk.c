#include "main.h"
/**
 *
 *
 *
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
				j++;
			}
		}
	}
	if ((s = '\0') || (accept = '\0'))
		return ('\0');
	return('\0');
}

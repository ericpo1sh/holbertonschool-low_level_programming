#include "main.h"
#include <stddef.h>
/**
 *
 *
 *
 *
 */
char *_strstr(char *h, char *n)
{
	int i = 0;
	int j = 0;
	int g = 0;

	if (n[j] == '\0')
	{
	return (&h[i]);
	}

	while (h[i] != '\0')
		if (h[i] == n[j])
		{
			if (g == 0)
			i++;
			j++;
			if (n[j] == '\0')
			return (&h[i]);
		}
		else
		{
		i = 0;
		j = 0;
		}
		i++;
	return (NULL);
}

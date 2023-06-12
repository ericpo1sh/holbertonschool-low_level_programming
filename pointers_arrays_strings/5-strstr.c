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
	int i, j = 0;

	if (n[j] == '\0')
	return (&h[i]);

	while (h[i] != '\0')
		if (h[i] == n[j])
		{
			i++;
			j++;
		if (n[j] == '\0')
			return (&h[i]);
		}
	return (NULL);
}

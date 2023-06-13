#include "main.h"
#include <stddef.h>
/**
 * _strstr - will check for first occurence of word in string
 * @h : this is the haystack string
 * @n : needle string, contains one word
 * Return: Adress of h[g] if null, whole string if true, null if nothing
 */
char *_strstr(char *h, char *n)
{
	int i = 0;
	int j = 0;
	int g = 0;

	if (n[i] == '\0')
	{
	return (&h[g]);
	}

	while (h[i] != '\0')
	{
		if (h[i] == n[j])
		{
			j++;
			if (g == 0)
			{
				g = i;
			}
			if (n[j] == '\0')
				return (&h[i]);
		}
		else
		{
			j = 0;
			g = 0;
		}
		i++;
	}
	return (NULL);
}

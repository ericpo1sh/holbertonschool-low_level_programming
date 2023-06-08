#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *
 *
 *
 *
 */
char *cap_string(char *s1)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++);
	{
	if (!((s1[i] >= 'a') && (s1[i] <= 'z')))
	{
		if (!((s1[i] >= 'A') && (s1[i] <= 'Z')))
		{
			if (!((s1[i] >= '0') && (s1[i] <= '9')))
			{
				i++;
				s1[i] = (s1[i] - 32);
			}
		}
	}
	}
	return (s1[i]);
}

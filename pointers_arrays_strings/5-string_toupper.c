#include <stdio.h>
#include <string.h>
#include "main.h"
#include <ctype.h>
/**
 *
 *
 *
 *
 */
char *string_toupper(char *s1)
{
	char i; 
	int n;

	for (n = 0; s1[n] != '\0'; n++)
	{
	if (s1[n] > 'a' && s1[n] <= 'z')
		s1[n] = (s1[n] - 32);
	}
	return (s1);
}


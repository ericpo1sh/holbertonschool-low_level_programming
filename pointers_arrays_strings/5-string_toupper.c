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
	const char i; 
	int n = 0;

	for (i = 'A'; i < 'Z'; i++)
	{
	if (s1[n] != i)
		s1[n] = (s1[n] - 32);
	i = 'A';
	}
	return (s1);
}


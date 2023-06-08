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

	while (s1[i])
	{
		for (s1[i] >= 'a' && s1[i] <= 'z'; i++)

	if (s1[i] - 1 == ' ' ||
	s1[i] - 1 == '\t' ||
	s1[i] - 1 == '\n' ||
	s1[i] - 1 == ',' ||
	s1[i] - 1 == ';' ||
	s1[i] - 1 == '.' ||
	s1[i] - 1 == '!' ||
	s1[i] - 1 == '?' ||
	s1[i] - 1 == '"' ||
	s1[i] - 1 == '(' ||
	s1[i] - 1 == ')' ||
	s1[i] - 1 == '{' ||
	s1[i] - 1 == '}')
		i == 0;
	str[i] = (s1[i] - 32)
	}
	return (s1);
}


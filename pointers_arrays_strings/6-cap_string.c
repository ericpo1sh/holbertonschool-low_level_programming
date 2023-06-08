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

	while (str[i])
	{
		for (s1[i] >= 'a' && s1[i] <= 'z')
		{
			i++;
		}
	if (str[i] - 1 == ' ' ||
	str[i] - 1 == '\t' ||
	str[i] - 1 == '\n' ||
	str[i] - 1 == ',' ||
	str[i] - 1 == ';' ||
	str[i] - 1 == '.' ||
	str[i] - 1 == '!' ||
	str[i] - 1 == '?' ||
	str[i] - 1 == '"' ||
	str[i] - 1 == '(' ||
	str[i] - 1 == ')' ||
	str[i] - 1 == '{' ||
	str[i] - 1 == '}')
		i == 0;
	str[i] = (str[i] - 32)
	}
	return (str);
}


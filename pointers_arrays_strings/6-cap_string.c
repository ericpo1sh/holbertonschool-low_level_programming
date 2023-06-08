#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * cap_string - will capitalize all words in the current string.
 * @s1 : our string that gets edited
 * Return: the vlaue of s1
 *
 */
char *cap_string(char *s1)
{
	int i = 0;

	while (s1[i])
	{
		while (!(s1[i] >= 'a' && s1[i] <= 'z'))	
			i++;

	if (s1[i - 1] == ' ' ||
	s1[i - 1] == '\t' ||
	s1[i - 1] == '\n' ||
	s1[i - 1] == ',' ||
	s1[i - 1] == ';' ||
	s1[i - 1] == '.' ||
	s1[i - 1] == '!' ||
	s1[i - 1] == '?' ||
	s1[i - 1] == '"' ||
	s1[i - 1] == '(' ||
	s1[i - 1] == ')' ||
	s1[i - 1] == '{' ||
	s1[i - 1] == '}' ||
	i == 0)
		s1[i] = (s1[i] - 32);
	i++;
	}
	s1[i] = '\0';
	return (s1);
}


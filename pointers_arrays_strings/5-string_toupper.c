#include <stdio.h>
#include <string.h>
#include "main.h"
#include <ctype.h>
/**
 * string_toupper - will check and convert lowercase chars to upper
 * @s1 : the string that will be checked
 * Return: the result
 */
char *string_toupper(char *s1)
{
	int n;

	for (n = 0; s1[n] != '\0'; n++)
	{
	if (s1[n] >= 'a' && s1[n] <= 'z')
		s1[n] = (s1[n] - 32);
	}
	return (s1);
}


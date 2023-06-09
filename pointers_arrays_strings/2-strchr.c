#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strchr - will start the string at the pointed char
 * @s : the string we are digging thru
 * @c : c is the character that we are looking for
 * Return: If value found then return value, if not then null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
	s++;
	}

	return ('\0');
}


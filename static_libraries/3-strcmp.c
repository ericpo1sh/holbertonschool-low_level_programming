#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcmp - will check if two strings are the same
 * @s1 : the first string to be checked
 * @s2 : the second string to be checked
 * Return: the result of the difference
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;

	i = (s1[i] - s2[i]);

	return (i);
}

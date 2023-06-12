#include "main.h"
/**
 * _strpbrk - will check for the first occurence of char in s 
 * @s : our first string to check
 * @accept : our string that we are highlighting
 * Return: adress of s[i] if char found, null if nothing found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s += s[i];
				return (s);
			}
		}
	}
	return (0);
}

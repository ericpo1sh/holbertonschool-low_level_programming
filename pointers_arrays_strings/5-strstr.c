#include "main.h"
#include <stddef.h>
/**
 * _strstr - will check for first occurence of word in string
 * @h : this is the haystack string
 * @n : needle string, contains one word
 * Return: Adress of h[g] if null, whole string if true, null if nothing
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}

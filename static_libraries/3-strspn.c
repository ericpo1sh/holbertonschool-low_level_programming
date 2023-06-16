#include "main.h"
#include <string.h>
/**
 * _strspn - finds length of s until its doesnt match accept
 * @s : the current string to check
 * @accept : the one to test s with
 * i is my counter for string s
 * j is my couter for accept
 * Return: the result of cnt
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int cnt = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (cnt != i)
			break;
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				cnt++;
	}
	return (cnt);
}

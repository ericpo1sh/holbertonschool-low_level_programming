#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * leet - will convert any string into leet format
 * @s - the string that we are given
 * Return: the string.
 * i is my counter for the a1 and for the s string
 * j is my counter for a2
 */
char *leet(char *s)
{
	int i;
	int j;

	char a1[10] = "AEOTLaeotl";
	char a2[10] = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a1[i])
			{
			s[i] = a2[j];
			}
		}
	}
s[i] = '\0';
return (s);
}

#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 */
char *leet(char *s)
{
	int i;
	int j;

	char a1[10] = "AEOTLaeotl";
	char a2[10] = "4307143071";

	while (s[i] != '\0')
		for (i = 0, j = 0; i < 10; j < 10; j++, i++)
		{
			if (s[i] == a1[i])
			{
			s[i] = a2[j];
			}
		}
s[i] = '\0';
return (s);
}

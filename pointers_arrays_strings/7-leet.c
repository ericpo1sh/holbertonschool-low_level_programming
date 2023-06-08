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

	char a1[10] = "AEOTLaeotl";
	char a2[10] = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a1[i])
			{
			s[i] = a2[i];
			}
		}
	}
s[i] = '\0';
return (s);
}

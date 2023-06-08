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

	while (s[i] != '\0')
		for (i = 0; i < 10; i++)
		{
			if (s[i] == a1[i])
			{
			s[i] = a2[i];
			}
		}
s[i] = '\0';
return (s);
}

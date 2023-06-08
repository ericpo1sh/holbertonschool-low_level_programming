#include <stdio.h>
#include <string.h>
#include "main.h"
#include <ctype.h>
/**
 *
 *
 *
 *
 */
char *string_toupper(char *s)
{
	int i;
	int x = strlen(s);

	for (i = 0; i < x; i++)
	{
		s[i] = toupper(s[i]);
	}
return (0);
}

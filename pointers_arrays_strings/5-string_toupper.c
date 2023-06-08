#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *
 *
 *
 *
 */
char *string_toupper(char *str)
{
	int i;
	int x = strlen(str) - 1;

	for (i = 0; i < x; i++)
	{
		str[i] = toupper(str[i]);
	}
return (0);
}

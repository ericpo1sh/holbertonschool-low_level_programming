#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string - prints out the string but backwards.
 * i : current position of the character in the string
 * @s : the string to be reversed.
 */
void rev_string(char *s)
{
	int x;
	int i = 0;
	int y;
	int c;

	while (s[i] != '\0')
	{
		i++;
	}

	if (i == 0)
	return;

	for (y = 0, x = i - 1; x > y; y++, x--)
	{
		c = s[y];
		s[y] = s[x];
		s[x] = c;
	}

}

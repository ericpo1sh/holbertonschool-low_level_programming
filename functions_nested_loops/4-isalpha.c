#include "main.h"
#include <stdio.h>

/**
 * _islower - checks for lowercase and uppercase characters
 *
 * @c: checking character
 *
 * Return: 1 for lowercase, Return 0 for else.
 */

int _isalpha(int c)
{
		if (c >= 97 && c <= 122 && c >= 65 && c <= 90)
	{
		return (1);
	}
		return (0);

}

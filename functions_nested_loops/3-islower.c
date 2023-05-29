#include "main.h"
#include <stdio.h>
/**
 * _islower - checks for lowercase characters
 * @c: checking character
 * Return: 1 for lowercase, Return 0 for else.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}

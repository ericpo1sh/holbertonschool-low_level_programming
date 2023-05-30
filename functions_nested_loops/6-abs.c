#include "main.h"
#include <stdio.h>
/**
 * _abs - computes tje absolute value of an integer.
 * @c: integer needs to be checked.
 * Return: Abs value or zero.
 */

int _abs(int c);

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}

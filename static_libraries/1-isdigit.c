#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks if var is equal to a number
 *
 * @c : number to be checked
 *
 * Return: if var is a number then 1, if not then 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
{
	return (1);
}
	else
	return (0);
}

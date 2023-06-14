#include "main.h"
/**
 * _pow_recursion - gives us solution of x^y
 * @x : our first int
 * @y : our second int
 * Return: -1 if y le 0, 1 if y is 0, result if y ge 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
	{
	return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}

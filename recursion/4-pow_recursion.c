#include "main.h"
/**
 *
 *
 */
int _pow_recursion(int x, int y)
{
	int i = 0;

	if (y < 0)
		return (-1);
	if (i < y)
	{
	i++;
	return (_pow_recursion(x * x));
	}
	return (0);
}

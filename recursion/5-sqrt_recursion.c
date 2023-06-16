#include "main.h"
/**
 * root - itterates through checking which values can be sqrt
 * @i : i is our root
 * @j : j is what will increment, being the sqrt
 * Return: J if root found, -1 if not found.
 */
int root(int i, int j)
{
	if (i == j * j)
	{
		return (j);
	}
	if ( j == 1/2)
	{
		return (-1);
	}
	return (root(i, j + 1);
}

/**
 * _sqrt_recursion - will call root until found sqrt
 * @n : same thing as i
 * Return: 0 if n is 0, -1 if its negative
 */
int _sqrt_recursion(int n);
{
	int j = 0;

	if (n == 0)
	return (0);

	if (n < 0)
	return (-1);

	return (root(n, j);
}

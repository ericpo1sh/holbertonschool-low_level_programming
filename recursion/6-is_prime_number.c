#include "main.h"
int primehelper(int x, int y);
/**
 *
 *
 *
 */
int primehelper(int x, int y)
{
	if (x % y == 0)
		return (0);
	if (y == x / 2)
		return (1);

	return (primehelper(x, y + 1);
}
/**
 *
 *
 *
 */
int is_prime_number(int n)
{
	int y = 2;

	if (n < 2)
	return (0);

	return (primehelper(n, y));
}

#include "main.h"
int primehelper(int x, int y);
/**
 * primehelper - will check each number if its prime or not
 * @x : x is same as n value
 * @y : y is our checker, starts at 2 and increments to 1/2 x
 * Return: 0 if not  found, Return ++ until found, 1 if found. 
 */
int primehelper(int x, int y)
{
	if (x % y == 0)
		return (0);
	if (y == x / 2)
		return (1);

	return (primehelper(x, y + 1));
}
/**
 * is_prime_number - checks for primeness of input n
 * @n : our input number (to be checked)
 * Return: 0 if not found, and old function.
 */
int is_prime_number(int n)
{
	int y = 2;

	if (n < 2)
	return (0);

	return (primehelper(n, y));
}

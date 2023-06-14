#include "main.h"
/**
 * factorial - this print out the factorial of N
 * @n : the imput number
 * Return: -1 if n le 0, 1 if is 0, and factorial if its ge.
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0)
	return (1);

	if (n > 0)
	{
	return (n * factorial(n - 1));
	}
	return (0);
}

#include "main.h"

/**
 * print_sign - checks n's value and prints out stats
 * n - has needs value checked.
 * Return: 1 for n>0, 0 for n==0, -1 for n<0.
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return(1);
	}
	else if (n == 0)
	{	
	_putchar(45);
	return(-1);
	}
	else if (n < 0)
	{
	_putchar(48);
	return(0);
	}
}

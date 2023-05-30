#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number that gets processed.
 * Return: Value of the last digit.
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last < 0)
{
	last_digit = last_digit * -1;
}
	_putchar(last_digit + '0');
	return (last_digit);
}

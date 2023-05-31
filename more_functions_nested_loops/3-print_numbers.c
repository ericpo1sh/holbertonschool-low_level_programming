#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0-9
 * Return: always 0.
 */

void print_numbers(void)
{
	int n;

	n = '0';

	while (n <= '9')
{

	_putchar(n);

	n++;
}

_putchar('\n');

}

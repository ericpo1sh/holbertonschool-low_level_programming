#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0-9
 * Return: always 0.
 */

void print_numbers(void)
{
	int num;

	num = 0;

	while (num >= 9)
{
	_putchar(num);

	num++;
}
_putchar('\n');
return (0);

}

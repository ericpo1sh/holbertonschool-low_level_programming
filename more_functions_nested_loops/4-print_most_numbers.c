#include "main.h"
#include <stdio.h>
/**
* print_most_numbers - prints all numbers 1-9 excluding 2,4.
*/

void print_most_numbers(void)
{
	int n;

	n = '-1';

	while (n < '9')
{
	n++;

	if ((n == '2') || (n == '4'))
	continue;

	else
	_putchar(n);
}
_putchar('\n');

}

#include "main.h"
#include <stdio.h>
/**
* print_line - prints underscore n times
* @n : number of times we want to print _
* len is the loop that will check if its less than n and print n times
*/

void print_line(int n)
{

	int len;

	if (n > 0)
{

	for (len = 0; len < n; len++)
{
	_putchar('_');
}
	_putchar('\n');
}
}

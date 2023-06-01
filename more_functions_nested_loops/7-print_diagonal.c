#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - will print a backslash in a cool diagnal line.
 * @n : how many lines, length line wise
 * space adds to the ammount of spaces, slash adds a slash when equal to n.
 */
void print_diagonal(int n)
{
	int space = 0;
	int slash = 0;

	if (n > 0)
	{
	for (slash < n; slash++)
	{
	for (space < slash; space++)
		_putchar(' ');
		_putchar('\\');

	_putchar('\n');
	}
	if (n <= 0)
	{
	_putchar('\n');
	}
}
}

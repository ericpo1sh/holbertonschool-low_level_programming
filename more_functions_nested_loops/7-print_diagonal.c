#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - will print a backslash in a cool diagnal line.
 * @n : how many lines, length line wise
 * space adds to the ammount of spaces, slash adds a slash when equal to n.
 */
void print_diagonal(int n)
{
	int i;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (space = 0; space < n; space++)
	{

		for (i = 0; i < space; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}

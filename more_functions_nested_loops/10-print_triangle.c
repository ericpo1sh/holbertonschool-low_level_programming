#include "main.h"
#include <stdio.h>
/**
 * print_triangle - will print a triangle followed by a new line.
 * @size : the input number that will tell us the size of triangle
 *
 *
 */

void print_triangle(int size)
{
	int space;
	int hash;
	int filler;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (space = size - 1; space >= 0; space--)
	{
		for (hash = 0; hash < space; hash++)
		{
			_putchar(' ');
		}
		for (filler = 0; filler < size - space; filler++)
		_putchar('#');
		_putchar('\n');
	}
}

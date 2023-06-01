#include "main.h"
#include <stdio.h>

/**
 * print_square - will print # the ammount of times specified.
 * @size : the ammount of times that # will print
 * hash is var in the loop that will help us.
 */
void print_square(int size)
{
	int hash;

	if (size > 0)
	{
		for (hash = 0; hash <= size; hash++)
		{
			_putchar(hash);
		}

		_putchar('\n');
	}
}

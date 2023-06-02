#include "main.h"
#include <stdio.h>

/**
 * print_square - will print # the ammount of times specified.
 * @size : the ammount of times that # will print
 * hash is var in the loop that will help us.
 * nl is the counter that will add new lines.
 */
void print_square(int size)
{
	int hash;
	int nl;

	if (size <= 0)
		_putchar('\n');

	if (size > 0)

	{
		for (nl = 0; nl < size; nl++)
		{
			for (hash = 0; hash < size; hash++)
			{
				_putchar('#');
			}
		_putchar('\n');

		}
	}

}

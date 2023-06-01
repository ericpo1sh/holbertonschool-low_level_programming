#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print numbers 1-14 followed by new line 10x.
 * z is integer that will be prited.
 * count counts itterations.
 */

void more_numbers(void)
{
	int z, count;

	for (count = 0; count <= 10; count++)
{
	for (z = 0; z <= 14; z++)
	{
		if (z > 9)
		{
		_putchar((z / 10) + '0';
		}
		_putchar((z % 10) + '0';
	}
	_putchar('\n');
}
}

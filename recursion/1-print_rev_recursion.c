#include "main.h"
/**
 *
 *
 */
void _print_rev_recursion(char *s)
{
	if ((*s - 1) != '\0')
	{
	_putchar(*s);
	_print_rev_recursion(s - 1);
	}
	else
		_putchar('\n');
}


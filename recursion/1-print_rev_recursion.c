#include "main.h"
/**
 * _print_rev_recursion - will print the string in reverse
 * @s : is the string that we will print
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}


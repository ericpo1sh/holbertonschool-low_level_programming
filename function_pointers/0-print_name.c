#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - will point to the function and print the name
 * @name : the name
 * @f : pointer to func
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}

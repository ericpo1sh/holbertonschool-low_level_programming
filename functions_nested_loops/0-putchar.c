#include "main.h"
#include <stdio.h>

/**
 * main - calls the fuction _putchar to print
 *
 * Return: Always 0. (Success)
 */

int main(void)
{

	char a[] = "_putchar";
	int s = sizeof(a);
	int b;

	for (b = 0; b < (s - 1); b++)
	{
		_putchar(a[b]);
	}
_putchar('\n');
return (0);
}

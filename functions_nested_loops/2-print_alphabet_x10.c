#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - make the alphabet, print 10x
 * Return: void.
 */

void print_alphabet_x10(void)

{
char ch;
int x;
x = 0;
while (x < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
x++;
}



}

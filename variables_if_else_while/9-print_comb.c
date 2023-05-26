#include <stdio.h>
/**
 * main - prints numbers in order with a coma and space in between each.
 *
 * Return: Always 0.
 */
int main(void)
{
	int hex;

	int Chr;

	int Chr2;

	Chr = 44;

	Chr2 = 32;

	hex = 48;

	while (hex <= 57)
	{
	putchar(hex);
	if(hex != 57)
	{
	putchar(Chr);

	putchar(Chr2);
	}
	hex++;
}
putchar('\n');
return (0);
}

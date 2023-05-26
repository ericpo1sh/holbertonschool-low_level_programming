#include <stdio.h>
/**
 * main - hex numbers should print untl 57, dec numbers till 102.
 *
 * Return: Always 0.
 */
int main(void)
{
	int hex;

	int dec;

	hex = 48;

	dec = 97;

	while (hex <= 57)
	{
	putchar(hex);

	hex++;
}
	while (dec <= 102)
	{
	putchar(dec);

	dec++;
}
putchar('\n');
return (0);
}

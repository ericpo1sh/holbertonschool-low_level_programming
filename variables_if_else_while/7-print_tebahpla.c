#include <stdio.h>
/**
 * main - declaring variable and initializing it with the range of z-a
 *
 * checking if the current value is less than the last letter and decrementing it
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet;

	alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);

		alphabet--;
}
putchar('\n');
return (0);
}

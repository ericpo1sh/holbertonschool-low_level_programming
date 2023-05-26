#include <stdio.h>
/**
 * main - declaring variable and initializing it with the range of a-z
 * also checks if alphabet is q or e, it wont print
 * checking if the current value is less than the last letter and adding to it
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
	if (alphabet != 'q' || alphabet != 'e')
{
	putchar(alphabet);

	alphabet++;
}
}
putchar('\n');
return (0);
}

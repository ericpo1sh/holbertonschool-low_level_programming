#include <stdio.h>
/**
 * main - declaring variable, initializing with the range of a-z and A-Z in 2nd
 *
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
		putchar(alphabet);

		alphabet++;
}
	char alphabets;

	alphabets = 'A';

	while (alphabets <= 'Z')
	{
		putchar(alphabets);

		alphabets++;
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
 * main - will print out the name of the file
 * @argc : counts the number of arguements
 * @argv : displays each string of the vector
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}

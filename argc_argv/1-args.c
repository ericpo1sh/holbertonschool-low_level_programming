#include <stdio.h>
/**
 * main - will count how many arguements there are.
 * @argv : in this case it does nothing
 * @argc : counts the number of arguements in the vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}


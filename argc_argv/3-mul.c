#include <stdio.h>
/**
 * main - will print out each string
 * @argc : counts the number of arguements
 * @argv : displays each string of the vector
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (; i < argc; i++)
	{
		sum *= atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

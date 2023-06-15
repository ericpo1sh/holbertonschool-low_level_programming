#include <stdio.h>
#include <stdlib.h>
/**
 * main - will print out each string
 * @argc : counts the number of arguements
 * @argv : displays each string of the vector
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int sum;

	for (; i < argc; i++)
	{
		sum = atoi(argv[i] * argv[i] + 1);
	}
	printf("%d\n", sum);
	return (0);
}

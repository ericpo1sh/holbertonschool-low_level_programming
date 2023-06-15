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
	int sum1;
	int sum2;

	(void)argc;

	{
		sum1 = atoi(argv[1]);
		sum2 = atoi(argv[2]);
	}
	printf("%d\n", (sum1 * sum2));
	return (0);
}

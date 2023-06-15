#include <stdio.h>
#include <stdlib.h>
/**
 * main - will mulitply and print result of two nums.
 * @argc : counts the number of arguements
 * @argv : displays each string of the vector
 * Return: 1 if only 1 number, 0 if it works.
 */
int main(int argc, char *argv[])
{
	int sum1;
	int sum2;

	if (argc < 3)
	{
	printf("Error\n");
	return (1);
	}
		sum1 = atoi(argv[1]);
		sum2 = atoi(argv[2]);
	printf("%d\n", (sum1 * sum2));
	return (0);
}

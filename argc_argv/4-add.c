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
	int i;
	int b;
	char *p;
	int sum;

	if (argc < 1)
	{
	printf("0\n");
	}

	for (i = 0; i < argc; i++)
	{
		*p = argv[i];
		for (b = 0; b <= strlen(argv[i]; b++)
		{	 
			if (p < '48' || p > '57')
			{
		       	printf("Error\n");
			return (1);
			}
		}
	}
}

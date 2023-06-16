#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - will add each input in cmd line
 * @argc : counts the number of arguements
 * @argv : displays each string of the vector
 * Return: 0 at the end. return 1 if char spotted
 */
int main(int argc, char * argv[])
{
	int i;
	char *p;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			p = argv[i];
			while (*p != '\0')
			{
				if (*p < 48 || *p > 57)
				{
					printf("Error\n");
					return (1);
				}
				p++;
			}
			sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	}
	else
	printf("0\n");

	return (0);
}

/*
 * File: 6-size.c
 * Auth: Eric
 */

#include <stdio.h>

/**
 * main - Prints the size of various types on the computer, compiled and run on
 * Return: Always 0.
 */
int main(void)
{
	char c;
	int ii;
	long int i;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(ii));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - will print our struct values
 * @d : the dog input
 */
void print_dog(struct dog *d)
{
	float zero = 0.000000;

	if (d != NULL)
	{
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
	printf("Name: (nil)\n");

	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %f\n", zero);

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
	printf("Owner: (nil)\n");
	}
}

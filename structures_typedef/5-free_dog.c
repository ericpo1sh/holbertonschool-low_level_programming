#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - WHO LET THE DOGS OUT
 * @d : doggy
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

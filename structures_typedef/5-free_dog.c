#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(age);
	free(d);
}

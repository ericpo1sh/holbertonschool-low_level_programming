#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializing the dog
 * @d : this is dogs input
 * @name : the name of doggy
 * @age : age of doggy
 * @owner : owner of doggy
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

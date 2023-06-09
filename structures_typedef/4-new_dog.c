#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include "9-strcpy.c"
#include "2-strlen.c"
/**
 * new_dog - will add a new dog to our struct
 * @name : name of the new dog
 * @age : age of doggy
 * @owner : owner of doggy
 * Return: NULL if fails, pointer if good.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	if (name == NULL || owner == NULL)
		return (NULL);

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = malloc(1 + _strlen(name));

	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc(1 + _strlen(owner));

	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}

	_strcpy(p->name, name);
	p->age = age;
	_strcpy(p->owner, owner);

	return (p);
}

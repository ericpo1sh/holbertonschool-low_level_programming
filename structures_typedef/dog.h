#ifndef dog_h
#define dog_h
/**
 * struct dog  - dog main h file
 * @name : name
 * @age : age
 * @owner : owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

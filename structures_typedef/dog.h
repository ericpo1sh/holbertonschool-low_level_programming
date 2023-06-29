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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

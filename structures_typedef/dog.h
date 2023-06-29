#ifndef dog_h
#define dog_h
/**
 * struct dog  - dog main h file
 * @name : name
 * @age : age
 * @owner : owner
 */
struct dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog_t(struct dog_t *d, char *name, float age, char *owner);
void print_dog_t(struct dog_t *d);

#endif

#ifndef DOG
#define DOG
/**
 * struct dog - gathering info for dog
 * @name: name of dog char
 * @age: number of dog float
 * @owner: owner of dog char
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

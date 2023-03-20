#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - defines a new object of type dog
 * description - new type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

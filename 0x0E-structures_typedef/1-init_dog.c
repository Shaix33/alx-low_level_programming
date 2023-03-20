#include "dog.h"
/**
 * init_dog - initializes dog structure
 * @d: new dog object
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 * Return: always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

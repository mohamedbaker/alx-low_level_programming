#include "dog.h"

/**
 * init_dog - initialization of dog struct
 * @d: pointer for the struct
 * @name: dog name
 * @age: age of the dog
 * @owner: owner
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

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's CARD ID
 * @name: DOG name
 * @age: it's age
 * @owner: it's owner
 * Description: DOGS Basic Info
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

#include <stdlib.h>
#include "dog.h"

/**
 *_len - gets a string len
 *@str: String
 *Description: str len
 *Return:str len
*/

int _len(const char *str)
{
	int length = 0;

	while (*str)
		length++;
	return (length);
}

/**
 * *_strcopy - a func returns a copy of string
 *@src: string
 *@dest: destination
 *Description: dup string
 *Return: destination
*/

char *_strcopy(char *dest, char *src)
{
	int counter;

	for (counter = 0; src[counter] != '\0'; counter++)

		dest[counter] = src[counter];

	dest[counter] = '\0';

	return (dest);
}

/**
 *new_dog - creats new dog and copy some info
 *@name: dog name
 *@age: dog age
 *@owner: owner
 *Return: NULL if fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age <= 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}

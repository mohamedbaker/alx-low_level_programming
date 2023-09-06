#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * Description: and initializes it with a specific char.
 * Returns NULL if size = 0
 * @size: size of array
 * @c: char
 * Return: a pointer to the array (1) , or NULL if it fails (0)
*/

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(p + i) = c;
	*(p + i) = '\0';
	return (p);
}

#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to a newly
 * Description: Duplicate string to a new memory allocation
 * @str: string to be duplicated
 * Return: duplicated str ,NULL if str = NULL
*/

char *_strdup(char *str)
{
	int size = 0;
	int i;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	p = (char *) malloc(size * sizeof(*str) + 1);

	if (p == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			p[i] = str[i];
	}
	return (p);
}

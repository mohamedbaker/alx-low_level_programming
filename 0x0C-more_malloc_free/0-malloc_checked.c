#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory with  malloc
 * @b: integar
 * Return: pointer or exit code
*/

void *malloc_checked(unsigned int b)
{
	void *ptr_nullable;

	ptr_nullable = malloc(b);

	if (ptr_nullable == NULL)
		exit(98);

	return (ptr_nullable);
}

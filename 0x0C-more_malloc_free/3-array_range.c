#include "main.h"
#include <stdlib.h>

/**
 * *array_range - array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);

	for (; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}

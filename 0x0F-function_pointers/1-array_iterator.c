#include "function_pointers.h"

/**
 * array_iterator - map arr
 * @array: array
 * @size: arr size
 * @action: pointer to func
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter = 0;

	if (array == NULL || action == NULL)
		return;

	for (; counter < size; i++)
		(*action)(array[i]);
}

#include "function_pointers.h"

/**
 * int_index - searche for int by comparing func
 * @array: array
 * @size: size
 * @cmp: pointer to comp fun
 * Return: index of elem
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		for (; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}

#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array of
 *		integers using the Binary search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
*/

int binary_search(int *array, size_t size, int value)
{
	int lo, mid, hi;
	int x;

	if (array == NULL)
	{
		return (-1);
	}

	lo = 0;
	hi = size - 1;

	while (lo <= hi)
	{
		mid = (lo + hi) / 2;

		printf("Searching in array: ");
		for (x = lo; x <= hi; x++)
			printf("%i%s", array[x], x == hi ? "\n" : ", ");

		if (array[mid] < value)
			lo = mid + 1;
		else if (array[mid] > value)
			hi = mid - 1;
		else
			return (mid);
	}

	return (-1);
}

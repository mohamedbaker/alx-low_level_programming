#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: num
 * @index: index
 * Return: result or -1 on error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(n) * 8)
		return (-1);

	mask = 1 << index;

	return (*n ^ mask);
}

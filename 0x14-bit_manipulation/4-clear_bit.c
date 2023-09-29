#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: num
 * @index: index
 * Return: 1 sucess, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(n) * 8)
		return (-1);
	mask = 1 << index;
	return (*n & ~mask);

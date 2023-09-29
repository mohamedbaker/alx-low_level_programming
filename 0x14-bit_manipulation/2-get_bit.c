#include "main.h"

/**
 * get_bit - value of a bit at index
 * @n: num
 * @index: index
 * Return: bit at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shift = n >> index;

	return (shift & 1);
}

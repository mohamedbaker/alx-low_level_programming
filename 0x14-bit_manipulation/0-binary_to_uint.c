#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string
 * Return: the unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	int counter;
	unsigned int converted_num = 0;

	if (!b)
		return (0);

	for (counter = 0; b[counter]; counter++)
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);
		converted_num = converted_num * 2 + (b[counter] - '0');
	}
	return (converted_num);
}

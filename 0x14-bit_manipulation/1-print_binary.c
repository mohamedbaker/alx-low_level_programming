#include "main.h"

/**
 * print_binary - prints the binary represent
 * @n: num to convert
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar(n & 1);
}

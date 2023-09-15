#include "variadic_functions.h"

/**
 * sum_them_all - calculates sum by variadic
 * @n: number of arguments
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int s = 0;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
		s += va_arg(args, int);

	va_end(args);
	return (s);
}

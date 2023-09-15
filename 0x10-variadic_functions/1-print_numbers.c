#include "variadic_functions.h"

/**
 * print_numbers - prints nums
 * @separator: seprator
 * @n: count
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(args, int));

		else if (separator != NULL && i == 0)
			printf("%d", va_arg(args, int));

		else
			printf("%s%d", separator, va_arg(args, int));
	}

	va_end(args);

	printf("\n");
}

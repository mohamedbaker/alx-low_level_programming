#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator
 * @n: count
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;

	va_list args;

	va_start(args, n);

	for (; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";
		if (separator == NULL)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(args);
}

#include "variadic_functions.h"

/**
 * print_all - prints all depending on format
 * @format: type
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *seprator = "";

	va_list args;

	va_start(args, format);

	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", seprator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", seprator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", seprator, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", seprator, str);
					break;
				default:
					i++;
					continue;
			}
			seprator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
}

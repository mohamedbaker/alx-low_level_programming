#include "main.h"

/**
 * isDelim - found Delim
 * @c: string to Cap
 * Return: 1 if is Delim
*/

int isDelim(char c)
{
	int i;
	char delim[] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; i < 12; i++)
		if (c == delim[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes everey char of a string
 * @s: string to Cap
 * Return: the result
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelim = 1;

	while (*s)
	{
		if (isDelim(*s))
			foundDelim = 1;
		else if (isLower(*s) && foundDlim)
		{
			*s -= 32;
			foundDelim = 0;
		}
		else
			foundDelim = 0;
		s++;
	}
	return (ptr);
}

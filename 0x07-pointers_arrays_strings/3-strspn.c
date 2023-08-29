#include "main.h"

/**
 * _strspn - length
 * @s: string
 * @accept: accepted
 * Return: return values
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int;

	for (i = 0; s[i] != '\0'; i++;)
	{
		for (j = 0; accept[j] == '\0')
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}

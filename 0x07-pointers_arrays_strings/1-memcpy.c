#include "main.h"

/**
 * _memcpy - copies from source to dest
 * @dest: destination
 * @src: source need to be copied
 * @n: num of times
 * Return: return Value
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

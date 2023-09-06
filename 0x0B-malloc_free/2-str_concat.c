#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: second string
 * Return: pointer (Success)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0, str_len;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	str_len = len1 + len2;
	s3 = malloc(sizeof(char) * (str_len + 1));
	if (s3 == NULL)
		return (NULL);
	if (s1)
	{
		while (i < len1)
		{
			s3[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < str_len)
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';

	return (s3);
}

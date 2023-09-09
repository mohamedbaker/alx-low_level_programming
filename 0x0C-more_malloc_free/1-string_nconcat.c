#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates 2 strs
 * @s1: string one
 * @s2: second string
 * @n: number of bytes
 * Return: pointer of the result
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i = 0, j = 0, str1_len = 0, str2_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[str1_len])
		str1_len++;
	while (s2[str2_len])
		str2_len++;

	s3 = malloc(str1_len + n + 1);

	if (s3 == NULL)
		return (NULL);

	for (; s1[i] != '\0'; i++)
		s3[i] = s1[i];

	for (; j < n; j++)
	{
		s3[i] = s2[j];
		i++;
	}

	s3[i] = '\0';

	return (s3);
}

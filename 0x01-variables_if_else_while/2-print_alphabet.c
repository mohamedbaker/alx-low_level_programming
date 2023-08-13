#include <stdio.h>

/**
 * main - Excute all
 * Description: prints Alphapet by only using putchar
 * Return: 0 (successfull)
*/
int main(void)
{
	int ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);
}

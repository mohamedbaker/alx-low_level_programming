#include <stdio.h>

/**
*main - Entery Point for program
*Description: print alphapits in revers
*Return: 0 (succsssfull)
*/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
*main - Contains all project
*Description: prints chars except some
*Return: 0 (succssfull)
*/

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
		putchar('\n');
		return (0);
}


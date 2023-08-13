#include <stdio.h>

/**
* main- Entery Point
* Description: prints Alphapits small and CAPS
* Return; 0 (successfull)
*/

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

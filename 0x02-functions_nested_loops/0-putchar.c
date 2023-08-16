#include "main.h"

/**
*main -Entery point
*Description: Pro that prints _putchar
*Return: 0 (succssfull)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}

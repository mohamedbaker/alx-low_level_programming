#include "main.h"

/**
* print_alphabet - Entery Point
* Description: prints the alphabet, in lowercase
* Return: 0 (succssfull)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
}

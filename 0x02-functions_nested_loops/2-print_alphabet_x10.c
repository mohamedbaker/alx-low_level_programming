#include "main.h"

/**
*print_alphabet_x10- Entery Point
*Description:function that prints 10 times the alphabet
*Return: 0 (succssfull)
*/

void print_alphabet_x10(void)
{
	int counter = 0;
	char ch;

	while (counter < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
		counter++;
	}
}

#include "main.h"

/**
*print_sign - Entery Point
*Description:  prints the sign of a number
*@n: holds the sign value
*Return: 0 fore null value 1 for postive values
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

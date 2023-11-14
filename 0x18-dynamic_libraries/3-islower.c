#include "main.h"

/**
*_islower - check if alpha is lowecase
*Description: Write a function that checks for lowercase character
*@c: char paramter to check if it's lower
*Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

#include "main.h"

/**
 * _pow_recursion - Return the result of raised num to the power of y
 * If y is lower than 0, the function should return -1
 * @x: base num
 * @y: power num
 * Return: Result or  -1 for false
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}


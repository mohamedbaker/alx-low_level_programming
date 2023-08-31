#include "main.h"

/**
 * _sqrt_recursion - return square root
 * @n: number to calcualte sqrt
 * @i: int
 * Return: the result
*/

int _sqrt_recursion_helper(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_recursion_helper(n, 0));
}

/**
 * _sqrt_recursion_helper - helper method
 * @n: number
 * @i: int
 * Return: the result
*/
int _sqrt_recursion_helper(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt_recursion_helper(n, i + 1));
}

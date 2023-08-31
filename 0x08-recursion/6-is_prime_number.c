#include "main.h"


/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 * @i: int
 * Return: 1 if n is a prime number, 0 if not
 */

int prime_helper(int n, int i);

int is_prime_number(int n)
{
	return (prime_helper(n, 2));
}

/**
 * prime_helper - calculates if a number is prime
 * @n: num
 * @i: int
 * Return: int
 */

int prime_helper(int n, int i)
{
	if (i >= n && n > 1)
		return (1);

	else if (n % i == 0 || n <= 1)
		return (0);

	else
		return (prime_helper(n, i + 1));
}

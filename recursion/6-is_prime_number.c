#include "main.h"

/**
 * _is_prime_helper - helper function to check if a number is prime
 * @n: number to check
 * @i: iterator
 *
 * Return: 1 if prime, 0 if not
 */
int _is_prime_helper(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0 || n < 2)
		return (0);
	return (_is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_is_prime_helper(n, 2));
}


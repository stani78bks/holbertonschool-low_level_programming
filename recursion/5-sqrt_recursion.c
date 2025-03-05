#include "main.h"

/**
 * _sqrt_helper - helper function to calculate square root
 * @n: number
 * @i: iterator
 *
 * Return: square root or -1 if no natural square root
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: square root or -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}


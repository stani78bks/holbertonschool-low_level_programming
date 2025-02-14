#include "main.h"

/**
 *print_last_digit - function that prints the last digit of a number
 *@n: Number targeted
 *Return: Always 0 (Sucess)
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = -1 * (n % 10);
	else
		last_digit = n % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}

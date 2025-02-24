#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers
 *
 *Return: Always 0.
 */
void more_numbers(void)
{
	int c, i;

	for (c = 0 ; c < 10 ; c++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}

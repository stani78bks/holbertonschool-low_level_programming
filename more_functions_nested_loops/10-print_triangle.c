#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: variable for size of the triangle
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j > i + 1; j--)
			{
				_putchar(35);
			}
			for (k = 0; k < i + 1; k++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}

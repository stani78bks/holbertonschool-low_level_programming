#include "main.h"

/**
 * _abs - Prints the absolute value of a number
 * @i: Number targeted
 *Return: Always 0 (Sucess)
 */
int _abs(int i)
{

	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);
	else
		return (0);
}

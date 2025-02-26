#include "main.h"
#include <limits.h> /* Pour INT_MAX et INT_MIN */

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value converted from the string.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			/* Vérification d'overflow avant d'ajouter un chiffre */
			if (result > (INT_MAX / 10) ||
			    (result == (INT_MAX / 10) && (s[i] - '0') > 7))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			result = result * 10 + (s[i] - '0');
		}
		else if (result > 0)
			break;
		i++;
	}

	return (sign * result);
}


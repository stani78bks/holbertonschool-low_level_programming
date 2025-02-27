#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The input string.
 *
 * Return: The modified string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	/* Iterate through each character of the string */
	while (str[i] != '\0')
	{
		/* Convert lowercase letters to uppercase */
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}

	return (str);
}


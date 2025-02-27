#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: The modified string.
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char separators[] = " \t\n,;.!?\"(){}";

	/* Capitalize first letter if it's lowercase */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;

	/* Iterate through the string */
	while (str[i] != '\0')
	{
		/* Check if the current character is a separator */
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}

	return (str);
}

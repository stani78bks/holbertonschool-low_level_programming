#include "main.h"

/**
 * _strcmp - Compare deux chaînes de caractères.
 * @s1: La première chaîne à comparer.
 * @s2: La deuxième chaîne à comparer.
 *
 * Return: Un nombre négatif si s1 est inférieure à s2,
 *         un nombre positif si s1 est supérieure à s2,
 *         0 si les deux chaînes sont égales.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}


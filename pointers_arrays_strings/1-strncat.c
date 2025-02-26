#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * @n: Maximum number of bytes to use from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* Trouver la fin de la chaîne dest */
	while (dest[i] != '\0')
		i++;

	/* Ajouter src à dest en utilisant au plus n caractères */
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Ajouter le caractère nul de fin */
	dest[i] = '\0';

	return (dest);
}


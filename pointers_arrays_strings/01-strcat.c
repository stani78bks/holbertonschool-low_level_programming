#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* Trouver la fin de `dest` */
	while (dest[i] != '\0')
		i++;

	/* Ajouter `src` à `dest` */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Ajouter le caractère null à la fin */
	dest[i] = '\0';

	return (dest);
}

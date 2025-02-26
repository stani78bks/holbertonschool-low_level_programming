#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the null byte (\0),
 *           to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copie des caractères de src vers dest */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	/* Ajout du caractère nul à la fin */
	dest[i] = '\0';

	return (dest);
}


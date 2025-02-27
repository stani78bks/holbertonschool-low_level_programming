#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes
 * @dest: The destination buffer
 * @src: The source string
 * @n: Maximum number of bytes to copy
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copier src dans dest jusqu'à n caractères ou jusqu'à '\0' */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Compléter avec des '\0' si src a moins de n caractères */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

#include "main.h"

/**
 * _strlen - Retourne la longueur d'une chaîne de caractères
 * @s: Pointeur vers la chaîne de caractères
 *
 * Return: Longueur de la chaîne (int)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

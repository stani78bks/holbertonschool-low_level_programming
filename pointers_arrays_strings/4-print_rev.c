#include "main.h"

/**
 * print_rev - Affiche une chaîne de caractères en sens inverse
 * @s: Pointeur vers la chaîne de caractères
 */
void print_rev(char *s)
{
	int len = 0;

	/* Trouver la longueur de la chaîne */
	while (s[len] != '\0')
		len++;

	/* Affichage en sens inverse */
	while (len > 0)
	{
		_putchar(s[len - 1]);
		len--;
	}

	_putchar('\n');
}

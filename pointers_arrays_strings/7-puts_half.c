#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The input string
 */
void puts_half(char *str)
{
	int length = 0, n, i;

	/* Trouver la longueur de la chaîne */
	while (str[length] != '\0')
		length++;

	/* Calculer le point de départ pour l'affichage */
	n = (length + 1) / 2;

	/* Afficher la seconde moitié */
	for (i = n; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}


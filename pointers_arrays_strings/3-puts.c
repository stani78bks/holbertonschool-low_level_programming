#include "main.h"

/**
 * _puts - Affiche une chaîne de caractères suivie d'une nouvelle ligne
 * @str: Pointeur vers la chaîne de caractères
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

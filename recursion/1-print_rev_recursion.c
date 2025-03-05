#include "main.h"

/**
 * print_rev_recursion - prints a string in reverse
 * @s: the string to print
 */
void print_rev_recursion(char *s)
{
	if (*s != '\0')  /* Vérification du caractère NULL */
	{
		print_rev_recursion(s + 1); /* Appel récursif */
		_putchar(*s);  /* Affiche le caractère actuel */
	}
}


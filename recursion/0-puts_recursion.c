#include "main.h"

/**
 * _puts_recursion - Affiche une chaîne de caractères suivie d'un saut de ligne.
 * @s: La chaîne de caractères à afficher.
 */
void _puts_recursion(char *s)
{
    if (*s)  /* Si on n'a pas atteint la fin de la chaîne */
    {
        _putchar(*s);  /* Affiche le caractère courant */
        _puts_recursion(s + 1);  /* Appel récursif pour le caractère suivant */
    }
    else
    {
        _putchar('\n');  /* Affiche un saut de ligne une fois la chaîne terminée */
    }
}


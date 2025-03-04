#include "main.h"

/**
 * _puts_recursion - imprime une chaîne suivie d'un saut de ligne
 * @s: la chaîne à imprimer
 */
void _puts_recursion(char *s)
{
    if (*s)  /* Cas de base : si la chaîne n'est pas vide */
    {
        _putchar(*s);  /* Imprime le caractère */
        _puts_recursion(s + 1);  /* Appel récursif pour le caractère suivant */
    }
    else
    {
        _putchar('\n');  /* Imprime un saut de ligne lorsque la chaîne est entièrement imprimée */
    }
}


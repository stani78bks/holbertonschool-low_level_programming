#include <unistd.h>

/**
 * _putchar - imprime un caractère à stdout
 * @c: Le caractère à imprimer
 * 
 * Retour : En cas de succès, retourne le caractère imprimé.
 */
int _putchar(char c)
{
    return write(1, &c, 1);  /* Utilise l'appel système write pour imprimer un caractère */
}

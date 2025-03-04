#include <unistd.h>

/**
 * _putchar - imprime un caractère à stdout
 * @c: Le caractère à imprimer
 *
 * Retour : 1 en cas de succès, -1 en cas d'erreur
 */
int _putchar(char c)
{
    return write(1, &c, 1);  /* Utilise l'appel système write pour imprimer un caractère */
}

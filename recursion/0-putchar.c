#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to write
 *
 * Return: 1 on success, -1 on error.
 */
int _putchar(char c)
{
return (write(1, &c, 1));  /* Assurez-vous qu'il n'y a pas d'espace ici */
}


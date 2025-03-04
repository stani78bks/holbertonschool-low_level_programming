#include <unistd.h>  /* For the write system call */

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success, 1 is returned. On error, -1 is returned.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));  /* Use write system call to print a character */
}


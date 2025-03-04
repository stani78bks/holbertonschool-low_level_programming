#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0')  /* Base case: if the string is empty */
        return;  /* Exit the function if we reach the null character */

    _print_rev_recursion(s + 1);  /* Recursively call the function with the next character */
    _putchar(*s);  /* Print the current character after recursive call */
}

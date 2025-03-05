#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to compute.
 *
 * Return: Factorial of n, or -1 if n is negative.
 */
int factorial(int n)
{
    if (n < 0)  /* Cas d'erreur */
        return (-1);
    if (n == 0)  /* Factorielle de 0 est 1 */
        return (1);
    
    return (n * factorial(n - 1));  /* Appel récursif */
}

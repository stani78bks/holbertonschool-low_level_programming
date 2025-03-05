#include "main.h"

/**
 * _sqrt_helper - Helps to find the square root recursively.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root, or -1 if none exists.
 */
int _sqrt_helper(int n, int guess)
{
    if (guess * guess == n)  /* Si guess est la racine carrée exacte */
        return (guess);
    if (guess * guess > n)  /* Si guess^2 dépasse n, pas de solution */
        return (-1);
    
    return (_sqrt_helper(n, guess + 1));  /* Essai avec un guess +1 */
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to compute the square root of.
 *
 * Return: The natural square root, or -1 if it does not exist.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)  /* Pas de racine carrée pour les négatifs */
        return (-1);
    return (_sqrt_helper(n, 0));  /* Appel à l'aide avec un guess initial de 0 */
}

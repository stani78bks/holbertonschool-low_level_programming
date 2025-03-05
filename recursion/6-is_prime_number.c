#include "main.h"

/**
 * _is_prime_helper - Checks if n is divisible by any number from 2 to sqrt(n).
 * @n: The number to check.
 * @div: The current divisor being tested.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int _is_prime_helper(int n, int div)
{
    if (div * div > n)  /* Si div^2 dépasse n, c'est un nombre premier */
        return (1);
    if (n % div == 0)  /* Si n est divisible par div, ce n'est pas un nombre premier */
        return (0);
    
    return (_is_prime_helper(n, div + 1));  /* Test avec div+1 */
}

/**
 * is_prime_number - Determines if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
    if (n < 2)  /* 0, 1 et les négatifs ne sont pas premiers */
        return (0);
    return (_is_prime_helper(n, 2));  /* Vérification à partir de 2 */
}

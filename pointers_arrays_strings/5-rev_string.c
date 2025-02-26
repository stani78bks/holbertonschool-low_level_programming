#include "main.h"

/**
 * rev_string - Inverse une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères.
 */
void rev_string(char *s)
{
    int len = 0, i;
    char temp;

    /* Trouver la longueur de la chaîne */
    while (s[len] != '\0')
    {
        len++;
    }

    /* Inverser la chaîne de caractères */
    for (i = 0; i < len / 2; i++)
    {
        temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}

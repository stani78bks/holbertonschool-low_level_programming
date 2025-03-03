#include "main.h"
#include <stddef.h>  /* Pour définir NULL */

/**
 * _strstr - Trouve la première occurrence de la sous-chaîne `needle` dans 
 *           la chaîne `haystack`.
 * @haystack: La chaîne principale dans laquelle chercher.
 * @needle: La sous-chaîne à rechercher.
 *
 * Retourne : un pointeur vers le début de la sous-chaîne si trouvée,
 *            ou NULL si la sous-chaîne n'est pas trouvée.
 */
char *_strstr(char *haystack, char *needle)
{
    char *h;  /* Pointeur pour parcourir haystack */
    char *n;  /* Pointeur pour parcourir needle */

    /* Si needle est une chaîne vide, retourner haystack */
    if (*needle == '\0')
    {
        return (haystack);
    }

    /* Parcours de la chaîne haystack */
    while (*haystack != '\0')
    {
        h = haystack;
        n = needle;

        /* Compare chaque caractère de haystack avec needle */
        while (*h != '\0' && *n != '\0' && *h == *n)
        {
            h++;
            n++;
        }

        /* Si toute la sous-chaîne needle est trouvée, retourner son début */
        if (*n == '\0')
        {
            return (haystack);
        }

        haystack++;  /* Passe au caractère suivant dans haystack */
    }

    return (NULL);  /* Retourne NULL si la sous-chaîne n'est pas trouvée */
}


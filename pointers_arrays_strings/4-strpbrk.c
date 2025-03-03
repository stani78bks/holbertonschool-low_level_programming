#include "main.h"
#include <stddef.h> /* pour NULL */

/**
 * _strpbrk - Cherche le premier caractère dans la chaîne s
 *            qui correspond à un caractère dans accept.
 * @s: La chaîne dans laquelle chercher.
 * @accept: L'ensemble des caractères à chercher dans s.
 *
 * Retourne : un pointeur vers le premier caractère trouvé dans s,
 *            ou NULL si aucun caractère correspondant n'est trouvé.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)  /* Tant qu'il y a des caractères dans s */
    {
        char *a = accept;

        /* Vérifie si le caractère s actuel correspond à un caractère de accept */
        while (*a)
        {
            if (*s == *a)
            {
                return (s); /* Retourne un pointeur vers ce caractère */
            }
            a++;
        }
        s++;  /* Passe au caractère suivant dans s */
    }

    return (NULL);  /* Retourne NULL si aucune correspondance n'est trouvée */
}


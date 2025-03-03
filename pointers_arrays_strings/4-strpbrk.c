#include "main.h"
#include <stddef.h>  /* pour NULL */

/**
 * _strpbrk - cherche un caractère dans une chaîne parmi un ensemble de caractères
 * @s: chaîne à rechercher
 * @accept: ensemble de caractères à rechercher dans la chaîne
 *
 * Retourne un pointeur vers le premier caractère dans s qui correspond à l'un des caractères dans accept,
 * ou NULL si aucun caractère ne correspond.
 */
char *_strpbrk(char *s, char *accept)
{
    /* Boucle à travers chaque caractère de la chaîne s */
    while (*s)
    {
        char *a = accept;

        /* Boucle à travers chaque caractère de accept */
        while (*a)
        {
            if (*s == *a)  /* Si un caractère correspond */
            {
                return (s);  /* Retourne le pointeur vers le caractère trouvé */
            }
            a++;  /* Passage au caractère suivant de accept */
        }
        s++;  /* Passage au caractère suivant de s */
    }

    return (NULL);  /* Retourne NULL si aucun caractère correspondant n'est trouvé */
}


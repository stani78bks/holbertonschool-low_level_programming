#include "main.h"
#include <stddef.h> /* pour NULL */

/**
 * _strpbrk - cherche le premier caractère d'une chaîne qui correspond à un caractère de l'ensemble accept.
 * @s: chaîne à parcourir
 * @accept: ensemble de caractères à chercher
 *
 * Retour: un pointeur vers le premier caractère de s qui correspond à un caractère de accept,
 *         ou NULL si aucun caractère ne correspond.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s) /* Tant qu'il y a des caractères dans s */
    {
        char *a = accept;

        while (*a) /* Parcourt accept */
        {
            if (*s == *a) /* Si un caractère de s est trouvé dans accept */
            {
                return (s); /* Retourne un pointeur vers ce caractère dans s */
            }
            a++;
        }
        s++; /* Passe au caractère suivant dans s */
    }

    return (NULL); /* Aucun caractère de s ne correspond à accept */
}

